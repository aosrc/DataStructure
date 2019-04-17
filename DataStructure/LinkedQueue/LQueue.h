//
// Created by rc on 19-4-17.
//

#ifndef LINKEDQUEUE_LQUEUE_H
#define LINKEDQUEUE_LQUEUE_H

#include "Queue.h"
#include <cassert>
#include "Link.h"

template <typename E>
class LQueue:public Queue<E>{
private:
    Link<E>* front;
    Link<E>* rear;
    int size;

public:
    LQueue(){
        front = rear = new Link<E>();
        size = 0;
    }

    ~LQueue(){
        clear();
        delete front;
    }

    void clear(){
        while(front->next){
            rear = front;
            front = front->next;
            delete rear;
        }
        rear = front;
        size = 0;
    }

    void enqueue(const E& item){
        rear->next = new Link<E>(item, nullptr);
        rear = rear->next;
        size++;
    }

    E dequeue(){
        assert(size != 0);
        E item = front->next->element;
        Link<E>* temp = front->next;
        front->next = temp->next;
        if(temp == rear)
            rear = front;
        delete temp;
        size--;
        return item;
    }

    const E& frontValue() const{
        assert(size != 0);
        return front->next->element;
    }

    int length() const{
        return size;
    }
};



#endif //LINKEDQUEUE_LQUEUE_H
