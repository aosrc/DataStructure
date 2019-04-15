//
// Created by rc on 19-4-12.
//

#ifndef LINKLIST_LINK_H
#define LINKLIST_LINK_H
#include <cstddef>
#include <iostream>
using namespace std;

template <typename E>
class Link{
private:
    static Link<E>* freelist;
public:
    E element;
    Link* next;

    Link(const E& elemVal ,Link* nextVal = nullptr){
        element = elemVal;
        next = nextVal;
    }

    Link(Link* nextVal = nullptr){
        next = nextVal;
    }

    void* operator new(size_t){
        if(freelist == nullptr) {
            cout<<"use std new"<<endl;
            return ::new Link;
        }
        Link<E> *temp = freelist;
        freelist = freelist->next;
        cout<<"use freelist new"<<endl;
        return temp;
    }

    void operator delete(void* ptr){
        cout<<"use freelist delete"<<endl;
        ((Link<E>*)ptr)->next = freelist;
        freelist = (Link<E>*)ptr;
    }
};

template <typename E>
Link<E>* Link<E>::freelist = nullptr;


#endif //LINKLIST_LINK_H
