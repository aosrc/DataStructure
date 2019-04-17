//
// Created by rc on 19-4-17.
//

#ifndef ARRAYBASEDSTACK_ASTACK_H
#define ARRAYBASEDSTACK_ASTACK_H

#include "Stack.h"
#include <cassert>
#define defaultSize 100

template <typename E>
class AStack: public Stack<E>{
private:
    int maxsize;
    int top;
    E* listArray;

public:
    AStack(int size = defaultSize){
        maxsize = size;
        top = 0;
        listArray = new E[size];
    }

    ~AStack(){
        delete[] listArray;
    }

    void clear(){
        top = 0;
    }

    void push(const E& item){
        assert(top != maxsize);
        listArray[top++] = item;
    }

    E pop(){
        assert(top != 0);
        return listArray[--top];
    }

    const E& topValue() const{
        assert(top != 0);
        return listArray[top-1];
    }

    int length() const{
        return top;
    }

};


#endif //ARRAYBASEDSTACK_ASTACK_H
