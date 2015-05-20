#include <iostream>
using namespace std;

int main ()
{
    int t, n, l, s, f=0, li;
    cin>>t;
    for (int i = 1; i<=t; i++) {
        l = 0;
        s = 0;
        cin>>n;
        for (int j=1; j<=n; j++) {
            cin>>li;
            if(j==1) {
                f = li;
            }

            if (li>f)
                l++;
            else if (li<f)
                s++;

            f=li;

        }
        cout<<"Case "<<i<<": "<<l<<" "<<s<<endl;
    }

    return 0;
}
