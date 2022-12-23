#pragma once
#include <iostream>


const int MAX = 10;


template <class T>
class Arr
{
private:

public:
	T data[MAX];
	int size;

	Arr() :size(0) {};

	void Add(T x)
	{
		data[size] = x;
		size++;
	};

	void Del()
	{
		if (size > 0)
			size--;
	};

	void Info()
	{
		std::cout << "Elements of contaier: ";
		for (int i = 0; i < size; i++)
		{
			std::cout << data[i] << " ";
		}
		std::cout << "\n";

	};

	int GetMin()
	{
		if (size <= 0)
			return NULL;
		int min = 0;
		for (int i = 1; i < size; i++)
			if (data[min] > data[i])
				min = i;

		return min;

	}

	int GetMax()
	{
		if (size <= 0)
			return NULL;
		
		int max = 0;
		for (int i = 1; i < size; i++)
			if (data[max] < data[i])
				max = i;
		return max;
	}

	int GetNext(int x)
	{
		int max = GetMax();

		for (int i = 0; i < size; i++)
		{
			if (data[i] > data[x] && data[i] < data[max])
				max = i;
		}

		return max;
	}

	int GetNextNegative(int x)
	{
		int min = GetMin();

		for (int i = 0; i < size; i++)
		{
			if (data[i] < data[x] && data[i] > data[min])
				min= i;
		}

		return min;
	}


	class iterator
	{
	private:
		int index;
		Arr* pdata;
	public:
		iterator() :index(0), pdata(0) {};
		iterator(int i, Arr* p) :index(i), pdata(p) {};

		Arr::iterator operator++()
		{
			if (index == this->pdata->GetMax())
				index = this->pdata->GetMin();
			else
				index = this->pdata->GetNext(index);
			return *this;
		};

		Arr::iterator operator--()
		{
			if (index == this->pdata->GetMin())
				index = this->pdata->GetMax();
			else
				index = this->pdata->GetNextNegative(index);
			return *this;
		};

		bool operator !=(Arr::iterator x)
		{
			return (index == x.index && pdata == x.pdata);
		};

		bool operator ==(Arr::iterator x)
		{
			return (index != x.index || pdata != x.pdata);
		};

		T& operator*()
		{
			if (pdata)
			{
				return pdata->data[index];
			}
			else
			{
				throw 0;
			}
		};
	};

	Arr::iterator begin()
	{
		return iterator(this->GetMin(), this);
	};

	Arr::iterator end()
	{
		return iterator(this->GetMax(), this);
	};
};
