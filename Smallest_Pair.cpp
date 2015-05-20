#include <iostream>
using namespace std;

int main ()
{
    int t, n, a;
    cin>>t;
    for (int i = 1; i<=t; i++) {
        cin>>n;
        int s1 = 100000, s2 = 100000;
        for (int j=1; j<=n; j++) {
            cin>>a;
            if(s1>a) {
                s2 = s1;
                s1 = a;
            } else if (s2>a) {
                s2 = a;
            }
        }
        cout<<s1+s2<<endl;
    }

    return 0;
}
