//
// Created by rc on 19-4-17.
//

#ifndef LINKEDSTACK_LSTACK_H
#define LINKEDSTACK_LSTACK_H

#include "Link.h"
#include "Stack.h"
#include <cassert>

template <typename E>
class LStack: public Stack<E>{
private:
    Link<E>* top;
    int size;

public:
    LStack(){
        top = nullptr;
        size = 0;
    }

    ~LStack() {
        clear();
    }

    void clear(){
        while(top){
            Link<E>* temp = top;
            top = top->next;
            delete temp;
        }
        size = 0;
    }

    void push(const E& item){
        top = new Link<E>(item,top);
        size++;
    }

    E pop(){
        assert(top != nullptr);
        Link<E>* temp = top;
        E item = temp->element;
        top = top->next;
        delete temp;
        size--;
        return item;
    }

    const E& topValue() const{
        assert(top != nullptr);
        return top->element;
    }

    int length() const{
        return size;
    }

};

#endif //LINKEDSTACK_LSTACK_H
