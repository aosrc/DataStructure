#include <iostream>
#include "LStack.h"
using namespace std;

int main() {
    LStack<int> s;
    s.push(1);
    s.push(2);
    int a = s.pop();
    int b = s.pop();
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}