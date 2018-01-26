#include<stdio.h>
#include<iostream>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<list>
#include<map>
#include<queue>
#include<algorithm>
#include<numeric>
#include<functional>
using namespace std; 
const int maxn = 111;
char s[maxn][maxn];
int n,m,sum,l[maxn],r[maxn];
int dp[maxn][2];
int main(void)
{
	int i,j;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%s",&s[i]);
			l[i] = m+1;r[i] = 0;
			for(j = 0; j < m+2; j++)
			{
				if(s[i][j] == '1')
				{
					l[i] = min(j,l[i]);
					r[i] = max(j,r[i]);
				}
			}
		}
		int ans = 0;
		dp[n-1][0] = 0;
		dp[n-1][1] = 1e8+5;
		for(i = n-2; i >= 0 ; i--)
		{
			dp[i][0] = min(dp[i+1][0] + 2*r[i+1] + 1,dp[i+1][1] + m+2);
			dp[i][1] = min(dp[i+1][0] + m+2,dp[i+1][1]+2*(m+1-l[i+1])+1);
		}
		for(i = 0; i < n; i++)
		{
			if(r[i] != 0 )
			{
				ans = min(dp[i][0] + r[i],dp[i][1] + (m+1-l[i]));
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
