﻿/*6. Описать класс для хранения данных(контейнер).Данные должны храниться, например,
в виде массива.Класс должен включать в себя функции добавления данных, удаления
данных, вывода данных на консоль(info()).Реализовать итератор для перебора данных
контейнера так, чтобы он перебирал элементы в порядке их возрастания.Итератор должен
быть кольцевым.Итератор должен быть двунаправленным.Продемонстрировать работу
шаблона на объектах как встроенного типа, так и собственного класса.Для этого создать
собственный класс и перегрузить в нём нужные функции - операции.*/

#include <iostream>
#include "Arr.h"
#include "Cust.h"

int main()
{
    Arr<double> q;

    q.Info();
    q.Add(23);
    q.Add(24);
    q.Add(26);
    q.Add(120);
    q.Add(1);
    q.Add(23);
    q.Info();

    int w = 0;

    for (Arr<double>::iterator it = q.begin(); w<12 ; ++it,w++)
    {
        std::cout << *it << "\t";
        
    }
    std::cout << "\n";
    
    w = 0;


    for (Arr<double>::iterator it = q.end(); w < 12; --it, w++)
    {
        std::cout << *it << "\t";

    }
    std::cout << "\n";

    w = 0;


    Arr<Cust> z;

    z.Info();
    z.Add(Cust(150));
    z.Add(Cust(3));
    z.Add(Cust(24));
    z.Add(Cust(8));
    z.Add(Cust(42));
    z.Add(Cust(130));
    z.Info();


    for (Arr<Cust>::iterator it = z.begin(); w < 12; ++it, w++)
    {
        std::cout << *it << "\t";

    }

}
