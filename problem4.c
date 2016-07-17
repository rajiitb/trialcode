#include<stdio.h>
void main()
{
    long i,j,x,p,n,s=0;
    for(i=100;i<=999;i++)
    {
        for(j=100;j<=999;j++)
        {
            n=i*j;p=n;
            while(n>0)
            {
                s=s*10 + n%10;
                n=n/10;
            }
            if(s==p)
                {
                    x=p;
                }
            s=0;
        }
    }
    printf("%d",x);
}
