#include<stdio.h>
#include<stdlib.h>
#define N 10001
int main()
{
    int num,count = 1,i,factor =0;
    for(num=3;;num++)
    {
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                factor++;
                if(factor>2)
                {
                    factor=0;
                    num++;
                    break;
                }
            }
        }
        if(factor == 2)
        {
            count++;
            if(count == N)
            {
                printf("\n%d th prime nunber is %d\n",N,i-1); //because we are outside the for loop of i so i must have increased by one !!.
                exit(0);
            }
        }
    }
}


