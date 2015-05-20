#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

class car {
public:
    double u, v, t, a, s;
    double sa() {
        cin>>u>>v>>t;
        a = (v - u) / t;
        s = (u * t ) + .5 * (a * t * t);
        return 0;
    }

    double st() {
        cin>>u>>v>>a;
        t = (v - u) / a;
        s = (u * t ) + .5 * (a * t * t);
        return 0;
    }

    double vt() {
        cin>>u>>a>>s;
        v = sqrt ( (u * u + 2 * a * s) );
        t = (v - u) / a;
        return 0;
    }

    double ut() {
        cin>>v>>a>>s;
        u = sqrt ( ((v * v) - (2 * a * s) ) );
        t = (v - u) / a;
    }
};


int main () {
    int num, i = 1;
    while (cin>>num) {
        if(num==0) break;

        car obj;
        switch (num) {
            case 1:
                obj.sa();
                cout.setf(ios::fixed);
                cout << setprecision(3) << "Case " << i << ": " << obj.s << " " << obj.a << endl;
                break;

            case 2:
                obj.st();
                cout.setf(ios::fixed);
                cout << setprecision(3) << "Case " << i << ": " << obj.s << " " << obj.t << endl;
                break;

            case 3:
                obj.vt();
                cout.setf(ios::fixed);
                cout << setprecision(3) << "Case " << i << ": " << obj.v << " " << obj.t << endl;
                break;

            case 4:
                obj.ut();
                cout.setf(ios::fixed);
                cout << setprecision(3) << "Case " << i << ": " << obj.u << " " << obj.t << endl;
                break;
        }
        i++;
    }
}
