#include<iostream>
using namespace std;
int main()
{
    int i,a,b,x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    a=x1;
    b=x2;
    for(i=1;;i++)
    {
        if((a>b&&v1>=v2)||(a<b&&v1<=v2))
        {
            cout<<"NO";
            break;
        }
        a=x1+i*v1;
        b=x2+i*v2;
        if(a==b)
        {
            cout<<"YES";
            break;
        }
    }
    return 0;
}
