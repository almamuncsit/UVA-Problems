#include <iostream>
using namespace std;

int algorithm (long long int n)
{
    int cycle = 1;
    while (n != 1) {
        cycle++;
        if ( (n % 2) == 0)
            n = n / 2;
        else
            n = (3 * n) + 1;
    }

    return cycle;
}

int main()
{
    long long int i, j, a, b;
    while (cin >> i >> j ) {
    long long int c = 0, c1;
        if (i < j) {
            a = i;
            b = j;
        } else {
            a = j;
            b = i;
        }

        while (a <= b) {
            c1= algorithm(a);
            if ( c1 > c ) c = c1;
            a++;
        }

        cout << i << " " << j << " " << c << endl;
    }
    return 0;
}
