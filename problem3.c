#include<stdio.h>

#define NUM 600851475143
void main()
{
    long i,j,c=0,p;
    for(i=1;i<=sqrt(NUM);i++)
    {
        if(NUM%i==0)
            {
                for(j=1;j<=i;j++)
                {
                    if(i%j==0)
                        c++;
                }
                if(c==2)
                {
                    p=i;
                }
                    c=0;
            }
    }
    printf("%d",p);
    getch();
}
