#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        if(n==0&&m==0)
            break;
        if(n%2!=0&&m%2!=0)
            printf("Echo\n");
        else
            printf("Yuki\n");
    }
    return 0;
}
