#include <iostream>
#include "AQueue.h"
using namespace std;

int main() {
    AQueue<int> q(10);
    for(int i = 0;i<10;i++)
        q.enqueue(i);
    for(int i = 0;i<10;i++)
        cout<<q.dequeue()<<endl;
    return 0;
}