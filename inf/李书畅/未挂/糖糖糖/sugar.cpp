#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, i;
    while(~scanf("%d%d", &a, &b))
    {
        i=0;
        while(++i)
        {
            if(i&1)
                a-=i;
            else
                b-=i;
            if(a<0)
            {
                printf("Vladik\n");
                break;
            }
            if(b<0)
            {
                printf("Valera\n");
                break;
            }
        }
    }
    return 0;
}
