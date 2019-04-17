//
// Created by rc on 19-4-12.
//

#ifndef LINKLIST_LINK_H
#define LINKLIST_LINK_H
#include <cstddef>

//double linked list with freelist support
template <typename E>
class Link{
private:
    static Link<E>* freelist;
public:
    E element;
    Link* next;
    Link* prev;

    Link(const E& elemVal ,Link* prevVal,Link* nextVal){
        element = elemVal;
        prev = prevVal;
        next = nextVal;
    }

    Link(Link* preVal = nullptr,Link* nextVal = nullptr){
        prev = preVal;
        next = nextVal;
    }

    void* operator new(size_t){
        if(freelist == nullptr) {
            return ::new Link;
        }
        Link<E> *temp = freelist;
        freelist = freelist->next;
        return temp;
    }

    void operator delete(void* ptr){
        ((Link<E>*)ptr)->next = freelist;
        freelist = (Link<E>*)ptr;
    }
};

template <typename E>
Link<E>* Link<E>::freelist = nullptr;


#endif //LINKLIST_LINK_H
