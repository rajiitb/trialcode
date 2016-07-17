#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    i=0;
    while(i!=(n-1))
    {
        if(i==(n-2))
        {
            c++;break;
        }
        if(a[i+1]==0&&a[i+2]==0)
        {
            i=i+2;c++;continue;
        }
        if(a[i+1]==0&&a[i+2]==1)
        {
            i=i+1;c++;continue;
        }
        if(a[i+1]==1)
        {
            i=i+2;c++;continue;
        }
    }
    cout<<c;
    return 0;
}
