#include<iostream>
using namespace std;
int main()
{
    int n,i,j,l=0,s=0,a[n][n];
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
        s=s+a[i][i];
    cout<<s;
}
