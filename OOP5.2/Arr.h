#pragma once
#include <vector>
#include <iostream>

template <class T>
class Arr
{
public:
	Arr();
public:
	std::vector<T> arr;
	double average;

public:
	void Info();
	void Av();
	void Add(T);
	void Remove(T);

};

template <class T>
Arr<T>::Arr() 
{ 
	average = 1000; 
};


template <class T>
void Arr<T>::Info()
{
	for (int i = 0; i < arr.size(); i++)
		std::cout << (char)arr[i] << ", ";

	std::cout << "\n";
};

template <class T>
void Arr<T>::Av()
{
	double av = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		av += (int)arr[i];
	}

	average = (av / arr.size())*2;
};


template <class T>
void Arr<T>::Add(T q)
{
	if ((int)q > average)
		return;
	arr.push_back(q);
	Av();

};
template <class T>
void Arr<T>::Remove(T q)
{
	std::vector<int> temp;

    for(int i=0;i<arr.size();i++)
        if(arr[i]==q)
            temp.push_back(i);
            
    for (int i : temp)
        arr.erase(arr.begin()+i);
};
