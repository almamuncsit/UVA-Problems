#include <iostream>
using namespace std;

int main ()
{
    int T, a, b, c;
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>a>>b>>c;
        if((a*a+b*b == c*c) || (b*b+c*c == a*a) || (a*a+c*c == b*b))
            cout<<"Case "<<i<<": yes"<<endl;
        else
            cout<<"Case "<<i<<": no"<<endl;
    }
    return 0;
}
