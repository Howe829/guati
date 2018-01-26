#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,m,i,j,a[25][25],s=20,b[405],index,num;
    //FILE *f1=fopen("data1.in","wb"),*f2=fopen("data1.out","wb");
    //while(s)
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        //n=rand()%18+2;
        //m=rand()%18+2;
        //fprintf(f1,"%d %d\n",n,m);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
//                a[i][j]=rand()%1000;
//                if(j==0)
//                {
//                    fprintf(f1,"%d",a[i][j]);
//                }
//                else
//                    fprintf(f1," %d",a[i][j]);
            }
          //fprintf(f1,"\n");
        }
        i=0,j=0,index=0,num=0;
        while(index<n*m)
        {
            b[index]=a[i][j];
            index++;
            if(i%2)
                j--;
            else
                j++;
            if(j>=m)
            {
                i++;
                j--;
            }
            if(j<0)
            {
                j++;
                i++;
            }
        }
        for(i=1;i<index-1;i++)
        {
            if(b[i]>b[i-1]&&b[i]>b[i+1]||b[i]<b[i-1]&&b[i]<b[i+1])
            {
                num++;
            }
        }
        //fprintf(f2,"%d\n",num);
        printf("%d\n",num);
        //s--;
    }
    //fclose(f1);
    //fclose(f2);
    return 0;
}
