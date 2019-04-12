#include <iostream>
#include "LList.h"
using namespace std;

int main() {
    LList<int> a;
    a.append(1);
    a.append(2);
    a.insert(0);
    a.append(3);
    for(a.moveToStart();a.currPos()<a.length();a.next())
        cout<<a.getValue()<<" ";
    return 0;
}