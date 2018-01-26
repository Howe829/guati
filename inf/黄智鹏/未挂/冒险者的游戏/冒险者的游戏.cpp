#include <stdio.h>
int main()
{

    int n,m,c;
	while(scanf("%d%d",&m,&n)!=EOF)
        puts((m%(n+1))?"first":"second");
    return 0;
}
