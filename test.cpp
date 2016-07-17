#include <iostream>
using namespace std;

int main(){
    int t,c=0,i;
    cin >> t;
    long a[t];
    for(i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    for(i = 0; i < t; i++)
    {

        while(a[i]>0)
            {
            int d=a[i]%10;

            if(d!=0&&a[i]%d==0)
                c++;
                a[i]/=10;
            }
        cout<<c<<endl;
        c=0;
    }

    return 0;
}
