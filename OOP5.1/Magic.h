#pragma once

template <class T>

int same(T* arr, T a, int n)
{
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += a == arr[i] ? 1 : 0;
	}

	return ans;
}

template <class T>

int shame(T* arr, T a, int n)
{
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += a != arr[i] ? 1 : 0;
	}

	return ans;
}