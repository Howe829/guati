#include<stdio.h>
#include<queue>
#include<string.h>
#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
typedef long long LL;
const int INF=0x3f3f3f3f;
const LL mod=1e9+7;

int main()
{
    int T,cas=1;
    int n;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        if(n>10)
            printf("%d %d\n",10,n-10);
        else
            printf("%d %d\n",n,0);
    }
    return 0;
}
