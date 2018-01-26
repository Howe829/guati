#include<bits/stdc++.h>
using namespace std;
const int maxn = 105;
char s[maxn];
int num[maxn];

int main()
{
	int n,m;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		scanf("%s",s);
		memset(num,0,sizeof num);
		for(int i = 0; s[i] != '\0'; i++)
			num[s[i]-'a']++;
		int ans = 0;
		for(int i = 0; i < 26; i++)
			ans = max(ans,num[i]);
		if(ans <= n)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
