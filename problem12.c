#include<stdio.h>
void main()
{
   long n=1,i,j,s=0,c=0,p;
   while(n>0)
   {
       for(i=1;i<=n;i++)
        s=s+i;
       for(j=1;j<=s;j++)
       {
           if(s%j==0)
            c++;
       }
       if(c>500)
       {
           p=s;
           break;
       }
       n=n+1;s=0;c=0;
   }
   printf("%d",p);
}
