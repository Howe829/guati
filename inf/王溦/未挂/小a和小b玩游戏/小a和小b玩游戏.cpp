#include <iostream>
#include <cstdio>

using namespace std;

int n, k;

int main()
{		
	while (~scanf("%d", &n))
	{
		int a;
		bool flag = false;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a);
			if (a & 1)
				flag = true;
		}
		if (flag)
			puts("First");
		else
			puts("Second");
	}
	
	return 0;
}
