#include <iostream>
#include "AStack2.h"
using namespace std;

int main() {
    AStack2<int> s(10);
    s.push(1,1);
    s.push(1,2);
    s.push(2,3);
    s.push(2,4);

    int a,b,c,d;
    s.pop(1,a);
    s.pop(1,b);
    s.pop(2,c);
    s.pop(2,d);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;

    return 0;
}