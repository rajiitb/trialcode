#include<stdio.h>
void main()
{
    long c=0,p=0, n=1,i,x;
    while(n>0)
    {
        for(i=1;i<=n;i++)
       {
           if(n%i==0)
            c++;
       }
        if(c==2)
        p++;
        if(p==10001)
            {
                x=n;
                break;
            }
        c=0;
        n=n+1;
    }
    printf("%d",x);
    getch();
}

