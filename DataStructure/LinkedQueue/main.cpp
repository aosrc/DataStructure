#include <iostream>
#include "LQueue.h"
using namespace std;

int main() {
    LQueue<int> q;
    for(int i = 0;i<10;i++)
        q.enqueue(i);
    for(int i = 0;i<10;i++)
        cout<<q.dequeue()<<endl;
    return 0;
}