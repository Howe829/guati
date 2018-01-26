#include<stdio.h>

int y,m,d;
int mm[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

void chuli()
{
    if(y%400==0||(y%100!=0&&y%4==0))mm[2]=29;
    if(m==12&&d==31)y++,m=1,d=1;
    else if(d==mm[m])m++,d=1;
    else d++;
    mm[2]=28;
}

int main()
{
    int n=10000;
    y=2018,m=1,d=25;
    while(n--)
    {
        chuli();
    }
    printf("%dÄê%02dÔÂ%02dÈÕ\n",y,m,d);
    return 0;
}
