#include<stdio.h>
#include<algorithm>
#include<fstream>
using namespace std;
int a[15];
int cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int i,j,k,num;
    //FILE *f=fopen("dataout.txt","wb"),*f1=fopen("datain.txt","r");
    while(scanf("%d",&k)!=EOF)
    {
        for(i=0;i<12;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+12,cmp);
        num=0;
        for(i=0;i<12;i++)
        {
            if(k<=0)
                break;
            k-=a[i];
            num++;
        }
        if(k>0)
            printf("-1\n");
        else
            printf("%d\n",num);
    }
    //fclose(f1);
    //fclose(f);
    return 0;
}
