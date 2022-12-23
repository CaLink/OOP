#include <iostream>
#include <thread>
#include <vector>
using namespace std;

#define x 10
#define y 1000
int arr[x][y];

void calc(int z)
{
	int ans = 0;
	for (int i = 0; i < y; i++)
		if (arr[z][i] % 2 != 0)
			ans++;
	std::this_thread::sleep_for(std::chrono::seconds((-(z * z) + 10 * z)));
	std::cout << "Thread " << z << " count " << ans << "\t" << (-(z * z) + 10 * z) << "\n";


}


int main()
{

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 1000; j++)
			arr[i][j] = std::rand() % 100 + 1;

	vector<thread> a;

	for (int i = 0; i < 10; i++)
	{
		a.push_back(thread(calc, i));
	}

	for (int i = 0; i < 10; i++)
	{
		a[i].join();
	}



}
