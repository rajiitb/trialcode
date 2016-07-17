#include<iostream>
using namespace std;
int main()
{
    int a[1000],p,d=0,c=0,i,j,size;
    cout<<"enter size of array(max. 1000)\n";
    cin>>size;
    cout<<"\nenter elements\n";
    for(i=0;i<size;i++)
        cin>>a[i];
    for(i=0;i<(size-1);i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                p=j-i;c++;
                if(c==1)d=p;
            }
            if(p<d)d=p;
        }
    }
    if(d!=0)
    {
        cout<<"\nshortest distance="<<d;
        return 0;
    }
    else
        return -1;
}
