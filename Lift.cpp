#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int t, p, lp;
    cin>>t;
    for (int i = 1; i<=t; i++) {
        int time = 19;
        cin>>p>>lp;
        int diff = std::abs(p-lp);
        if (diff>0)
            time += diff * 4;

        time += p * 4;

        cout<<"Case "<<i<<": "<<time<<endl;
    }

    return 0;
}
