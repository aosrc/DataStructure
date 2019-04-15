#include <iostream>
#include "LList.h"
using namespace std;

int main() {
    LList<int> a;
    a.append(0);
    a.remove();
    a.insert(1);
    a.append(2);
    a.remove();
    a.append(3);
    a.remove();
    return 0;
}