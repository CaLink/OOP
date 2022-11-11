﻿// OOP5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "CuM.h"
#include "Magic.h"

int main()
{
	
	CuM temp(10, 5);
	CuM tArr[5] = {CuM(2,1),CuM(4,2) ,CuM(6,3) ,CuM(8,4) ,CuM(10,5)};

	int te = 5;
	int iArr[5] = { 4,5,5,3,1 };

	std::cout<<"Same: " << same(tArr, temp, 5) << std::endl;
	std::cout <<"Shame: "<< shame(tArr,temp,5) << std::endl;

	std::cout <<"Same: "<< same(iArr, te, 5) << std::endl;
	std::cout<<"Shame: " << shame(iArr, te, 5) << std::endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
