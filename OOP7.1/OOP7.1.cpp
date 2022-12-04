#include <iostream>
#include <thread>

#define x 10
#define y 1000
int arr[x][y];

void calc(int z)
{
	int ans = 0;
	for (int i = 0; i < y; i++)
		if (arr[z][i] % 2 != 0)
			ans++;
	std::cout << "Thread " << z << " count " << ans << "\n";

}


int main()
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 1000; j++)
			arr[i][j] = std::rand() % 100 + 1;

	for (int i = 0; i < 10; i++)
	{
		std::thread t(calc, i);
		t.join();
	}

}
