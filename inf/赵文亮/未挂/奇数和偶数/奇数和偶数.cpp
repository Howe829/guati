#include<iostream>
#include<cstdio>
int main()
{
    int n,a[1000];
    while(~scanf("%d",&n))
    {
         for(int i=1;i<=n;++i)
             scanf("%d",&a[i]);
         if(n%2==0||a[1]%2==0||a[n]%2==0)
             printf("No\n");
         else
             printf("Yes\n");
    }
    return 0;
}
