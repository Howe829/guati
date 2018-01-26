#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char ch[1000005*2][20];
int ans[20];
int main()
{
    int n,m,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        m=2*n-1;
        memset(ch,0,sizeof(ch));
        memset(ans,0,sizeof(ans));
        for(i=1;i<=m;i++)
        {
            for(j=0;j<7;j++)
                scanf("%c",&ch[i][j]);
            getchar();
        }
        for(i=0;i<7;i++)
            for(j=1;j<=m;j++)
                ans[i]^=int(ch[j][i]);
        for(i=0;i<7;i++)
            printf("%c",char(ans[i]));
        printf("\n");
    }
    return 0;
}
