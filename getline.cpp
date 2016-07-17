#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j;cin>>t;
    long a[t][2];
    for(i=0;i<t;i++)
        for(j=0;j<2;j++)
            cin>>a[i][j];
        for(i=0;i<t;i++)
        {
        if(((int)sqrt(a[i][0])==sqrt(a[i][0])&&(int)sqrt(a[i][1])==sqrt(a[i][1]))||((int)sqrt(a[i][0])==sqrt(a[i][0])&&(int)sqrt(a[i][1])!=sqrt(a[i][1])))
        cout<<(int)sqrt(a[i][1])-(int)sqrt(a[i][0])+1<<'\n';
        else
            cout<<(int)sqrt(a[i][1])-(int)sqrt(a[i][0])<<'\n';
        }
    return 0;
}
