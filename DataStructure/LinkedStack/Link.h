//
// Created by rc on 19-4-12.
//

#ifndef LINKLIST_LINK_H
#define LINKLIST_LINK_H

template <typename E>
class Link{
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
};



#endif //LINKLIST_LINK_H
