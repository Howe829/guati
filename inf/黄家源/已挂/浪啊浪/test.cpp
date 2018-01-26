#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
{
    int s=100,n,num,i,j,x,temp;
    //FILE *f1=fopen("datain.txt","wb"),*f2=fopen("dataout.txt","wb");
    //while(s--)
    while(scanf("%d",&n)!=EOF)
    {
        num=0;
        //n=rand()%995+5;
        //fprintf(f1,"%d\n",n);
        //x=rand()%999+1;
        //fprintf(f1,"%d",x);
        scanf("%d",&x);
        for(i=0;i<n-1;i++)
        {
            temp=x;
            scanf("%d",&x);
            //x=rand()%999+1;
            //fprintf(f1," %d",x);
            if(x<temp)
                num++;
        }
        num++;
        //fprintf(f1,"\n");
        //fprintf(f2,"%d\n",num);
        printf("%d\n",num);
    }
    //fclose(f1);
    //fclose(f2);
    return 0;
}
