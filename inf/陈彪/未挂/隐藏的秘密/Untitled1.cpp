#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <set>
#include <cmath>
#include<ctime>
#include <algorithm>
#define INF 0x3f3f3f3f
#define MAXN 2005
#define Mod 10001
using namespace std;
char a[MAXN],b[MAXN];
int aa[MAXN],bb[MAXN];
char ss[]={'A','B','C','D',' ','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W',' ','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',' '};
bool check(char &a)
{
    if(a>='a'&&a<='z')
    {
        a-=32;
        return true;
    }
    if(a>='A'&&a<='Z')
        return true;
    return false;
}
int main()
{
    int t,cnt=1;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    scanf("%d",&t);
    getchar();
    while(t--)
    {

        gets(a);
        gets(b);
        memset(aa,0,sizeof(aa));
        memset(bb,0,sizeof(bb));
        int lena=strlen(a),lenb=strlen(b);
        for(int i=0; i<lena; ++i)
        {
            if(check(a[i]))
                aa[a[i]-'A']++;
        }
        for(int i=0; i<lenb; ++i)
        {
            if(check(b[i]))
                bb[b[i]-'A']++;
        }
        bool flag=true;
        for(int i=0;i<26;++i)
            if(bb[i]!=aa[i])
                flag=false;
        printf("Case %d: ",cnt++);
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
