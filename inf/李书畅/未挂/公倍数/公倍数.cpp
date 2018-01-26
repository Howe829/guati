#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef long long ll;
const int maxn=100000;
int main()
{
	ll n,sum;
	FILE *f1=fopen("data.in", "wb"), *f2=fopen("data.out", "wb");
    for(int i=0; i<20; i++)
    {
        n=rand()%maxn+1;
        fprintf(f1,"%lld\n", n);
        if(n <= 2)
	        sum = n;
     	else
            if(n%2 == 0)
            {
                if(n%3 != 0)
                    sum = n*(n-1)*(n-3);
                else
                    sum = (n-1)*(n-2)*(n-3);
            }
            else
                sum = n*(n-1)*(n-2);
        cout<<sum<<endl;
        fprintf(f2, "%lld\n", sum);
    }
    fclose(f1);
    fclose(f2);
	return 0;
}
