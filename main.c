#include <stdio.h>
#include <stdlib.h>

int main(void)
{
       int Data[10000];
       int digit;
       int i,j,r,k;
       int N;

       for(i=1;i<10000+1;i++)
          Data[i]=0;
       Data[0]=1;
       Data[1]=1;
       digit=1;

       printf("输入想要计算的阶乘数:");
       scanf("%d",&N);

       for(i=1;i<N+1;i++)
       {
           for(j=1;j<digit+1;j++)
               Data[j]*=i;
           for(j=1;j<digit+1;j++)
           {
               if(Data[j]>10)
               {
                   for(r=1;r<digit+1;r++)
                   {
                       if(Data[digit]>9)
                           digit++;
                       Data[r+1]+=Data[r]/10;
                       Data[r]=Data[r]%10;
                   }
               }
           }
       }
       printf("%d!=",N);
       for(k=digit;k>0;k--)
           printf("%d",Data[k]);
       return 0;
}

