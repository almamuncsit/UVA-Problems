#include <iostream>
using namespace std;

int main ()
{
    int t, n;
    cin>>t;
    for (int i = 1; i<=t; i++) {
        cin>>n;
        int o = 0;
        while (n>0) {
            if(n%2 == 1) o++;
            n /= 2;
        }
        if (o%2 == 0)
            cout<<"Case "<<i<<": even"<<endl;
        else
            cout<<"Case "<<i<<": odd"<<endl;
    }

    return 0;
}
