#include <iostream>
using namespace std;
int main(){
    int a=1,b=2,c=3,d=4,t;
    string opin;
    cout << a << " "<< b <<endl;
    cout << c << " "<< d <<endl;
    cin >> opin[0];
    if (opin == "H" )
    {
        t=a;
        a=c;
        c=t;
    }
    if (opin== "A" )
    {
        t=a;
        a=c;
        c=t;
    }
    cout << a << " "<< b <<endl;
    cout << c << " "<< d <<endl;
}
