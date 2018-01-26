#include<bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
   for(int i=1;i<=6;i++)scanf("%d",&a[i]);
   for(int i=1;i<=3;i++){a[i]-=a[i+3];if(a[i]>0)a[i]/=2;}
   int sum=a[1]+a[2]+a[3];
    if(sum>=0)
    puts("Yes");
    else
    puts("No");
    return 0;
}