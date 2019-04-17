//
// Created by rc on 19-4-17.
//

#ifndef ARRAYBASEDQUEUE_AQUEUE_H
#define ARRAYBASEDQUEUE_AQUEUE_H

#include "Queue.h"
#include <cassert>
#define defaultSize 100

template <typename E>
class AQueue: public Queue<E>{
private:
    int maxsize;
    int front;
    int rear;
    E* listArray;

public:
    AQueue(int size = defaultSize) {
        maxsize = size + 1;
        front = 1;
        rear = 0;
        listArray = new E[maxsize];
    }

    ~AQueue() {
        delete[] listArray;
    }

    void clear(){
        front = 1;
        rear = 0;
    }

    void enqueue(const E& item){
        assert((rear+2) % maxsize != front);
        rear = (rear + 1) % maxsize;
        listArray[rear] = item;
    }

    E dequeue(){
        assert(length() != 0);
        E item = listArray[front];
        front = (front+1) % maxsize;
        return item;
    }

    int length() const{
        return ((rear+maxsize)-front+1) % maxsize;
    }

    const E& frontValue() const{
        assert(length() != 0);
        return listArray[front];
    }
};


#endif //ARRAYBASEDQUEUE_AQUEUE_H
