#include<stdio.h>
void main()
{
    long s=0,i=1,c=0,j;
    while(i)
    {
    for(j=1;j<=i;j++)
      {
         if(i%j==0)
         c++;
      }
         if(c==2)
         s=s+i;
         c=0;i=i+1;
     }
     printf("%d",s);getch();
}


