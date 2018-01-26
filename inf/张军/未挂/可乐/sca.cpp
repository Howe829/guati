#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
int main()
{
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            cout<<"0"<<endl;
        else
            cout<<n*n*n-(n-1)*(n-1)*(n-1)<<endl;
    }
    return 0;
}
