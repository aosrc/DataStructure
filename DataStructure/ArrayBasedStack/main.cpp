#include <iostream>
#include "AStack.h"
using namespace std;

int main() {
    AStack<int> s(10);
    s.push(1);
    s.push(2);
    int a = s.pop();
    int b = s.pop();
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}