#include <iostream>

using namespace std;

class Human
{
public:
    virtual void Info() = 0;
    virtual void Hair() = 0;
    virtual void Nails() = 0;

    //Human();
};

class Man : public Human
{
public:
    void Info()
    {
        cout << "ImMan\n";
    }
    void Hair()
    {
        cout << "?Jumasubma?\n";
    }
    void Nails()
    {
        cout << "0.1 mm\n";
    }



};

class Fem :public Human
{
public:
    void Info()
    {
        cout << "Hate Man\n";
    }
    void Hair()
    {
        cout << "On my body\n";
    }
    void Nails()
    {
        cout << "3000 m\n";
    }


};


class Child :public Human
{
public:
    void Info()
    {
        cout << "Minecraft\n";
    }
    void Hair()
    {
        cout << "Hate Wash\n";
    }
    void Nails()
    {
        cout << "Nails????\n";
    }


};


int main()
{
    Human* h;
    Man m;
    Fem f;
    Child c;

    h = &m;
    h->Info();
    h->Hair();
    h->Nails();

    h = &f;
    h->Info();
    h->Hair();
    h->Nails();

    h = &c;
    h->Info();
    h->Hair();
    h->Nails();

    return 0;
}
