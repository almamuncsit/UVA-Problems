#include <iostream>
using namespace std;

int main()
{
    int T, N, K, P;
    cin>>T;
    for (int i=1; i<=T; i++) {
        cin>>N>>K>>P;
        int np = P%N;
        for(int j=1; j<=np; j++) {
            if(K==N)
                K = 1;
            else
                K = K+1;
        }
        cout<<"Case "<<i<<": "<<K<<endl;
    }
    return 0;
}
