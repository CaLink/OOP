#include "Writer.h"


std::mutex Writer::con_mu;

Writer::Writer()
{

}

Writer::Writer(Checker* checker)
{
    myChecker = checker ;
    id = globalID++;
    posted = 0;
    // ��� ������ ������� ������ - �� �������� ����
    thrd = std::thread(Send, std::ref(*this));
}

int Writer::PostInfo()
{
    return posted;
}

void Writer::Send(Writer& wrt)
{
    int postCount = 0;
    srand(wrt.id);
    while (1)
    {
        // ������� ������� ��������� ����� (1-3 ���)
        //std::this_thread::sleep_for(std::chrono::seconds(rand() % 3 + 1));
        // ����� ����
        postCount = wrt.myChecker->Check(rand()%5+1);
        if (postCount<= 0) 
            break;
        wrt.posted += postCount;

        // ��� ��������� ������ ������ ���� ���������� ������
        // ������ ������ �� ����� �������� �� ������� ������������
        con_mu.lock();
        std::cout << wrt.id << " writer has writed " << postCount << " post(" << wrt.posted<< " all)\n";
        con_mu.unlock();
    }
    con_mu.lock();
    std::cout << wrt.id << " writer has writed " << postCount << " post(" << wrt.posted << " all)\n";
    con_mu.unlock();
}

std::thread* Writer::getThreadReference()
{
    return &thrd;
}