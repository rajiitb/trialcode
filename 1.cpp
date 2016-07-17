#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int t,i,j,c=0;cin>>t;
    long a[t][2];
    for(i=0;i<t;i++)
        for(j=0;j<2;j++)
            cin>>a[i][j];
        for(i=0;i<t;i++)
        {
        for(j=a[i][0];j<=a[i][1];j++)
            {
            if(sqrt(j)==(int)sqrt(j))
                c++;
        }
        cout<<c<<'\n';
        c=0;
    }
    return 0;
}
