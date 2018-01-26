#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef long long ll;
const int Maxn = 1e6;
char str[35];
ll a,b,c,result,ans=-1;
ll sz(int s, int e)
{
    ll t=0;
    for(int i=s;i<=e;i++)
    {
        t=t*10+str[i]-'0';
    }
    return t;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
    while(n--)
    {
        ans=-1;
        scanf("%s", str);
        int len=strlen(str);
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len-1;j++)
            {
                if((i+1)>7||(j-(i+1)+1)>7||(len-1-(j+1)+1)>7)continue;
                int l1=i-0+1,l2=j-(i+1)+1,l3=len-1-(j+1)+1;
                if((str[0]=='0'&&l1!=1)||(str[i+1]=='0'&&l2!=1)||(str[j+1]=='0'&&l3!=1))continue;
                a=sz(0,i);
                b=sz(i+1,j);
                c=sz(j+1,len-1);
                if(a>Maxn||b>Maxn||c>Maxn)continue;
                result=a+b+c;
                if(result>ans)
                    ans=result;
            }
        }
        printf("%lld\n",ans);
    }
    }
    return 0;
}
