#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int n, k;

int main()
{
	while (cin >> n >> k)
	{
		int a = 0, b = 0;
		long long m = n;
		while (n % 2 == 0)
		{
			n /= 2;
			a++;
		}
		while (n % 5 == 0)
		{
			n /= 5;
			b++;
		}
		for (int i = a; i < k; i++)
			m *= 2;
		for (int i = b; i < k; i++)
			m *= 5;
		cout << m << endl;
	}
	
	return 0;
}
