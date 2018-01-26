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
const int maxn = 105;
map<char,int> ma,mb;
int main(void)
{
	ma['v'] = 0;
	ma['<'] = 1;
	ma['^'] = 2;
	ma['>'] = 3;
	
	mb['v'] = 0;
	mb['>'] = 1;
	mb['^'] = 2;
	mb['<'] = 3;
	
	char st[4],en[4];
	int n;
	while(scanf("%s%s",st,en)!=EOF)
	{
		scanf("%d",&n);
		if(( ma[ st[0] ] + n%4 ) % 4 == ma[en[0]] && ( mb[ st[0] ] + n%4 ) % 4 != mb[en[0]])
			printf("cw\n");
		else if( ( mb[ st[0] ] + n%4 ) % 4 == mb[en[0]] && ( ma[ st[0] ] + n%4 ) % 4 != ma[en[0]])
			printf("ccw\n");
		else
			printf("undefined\n");
	}
	return 0;
}
