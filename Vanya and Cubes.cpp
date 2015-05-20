#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int n, num = 0, total = 0, gt = 0, i = 1;
    cin>>n;
    while (total < n) {
        total += i;
        gt += total;
        if(gt <= n) {
            num++;
        }
        i++;
    }
    cout<<num;

    return 0;
}
