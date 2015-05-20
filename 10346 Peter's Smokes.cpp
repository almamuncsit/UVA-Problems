#include <iostream>
using namespace std;

int main ()
{
    int n, k, nb;
    while (cin>>n>>k) {
        nb = n;
        while (n>= k) {
            nb += n/k;
            n = n/k + n%k;
        }
        cout<<nb<<endl;
    }
    return 0;
}
