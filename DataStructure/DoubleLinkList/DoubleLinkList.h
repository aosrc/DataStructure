//
// Created by rc on 19-4-17.
//

#ifndef DOUBLELINKLIST_DOUBLELINKLIST_H
#define DOUBLELINKLIST_DOUBLELINKLIST_H

#include "Link.h"
#include <assert.h>

template <typename E>
class DoubleLinkList:public Link<E>{
private:
    Link<E>* head;
    Link<E>* tail;
    Link<E>* curr;
    int cnt;

    void init(){
        head = curr = new Link<E>();
        tail = new Link<E>();
        head->next = tail;
        tail->prev = head;
        cnt = 0;
    }

    void removeall(){
        while(head){
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    DoubleLinkList(){
        init();
    }

    ~DoubleLinkList(){
        removeall();
    }

    void insert(const E& item){
        curr->next = curr->next->prev =
                new Link<E>(item,curr,curr->next);
        cnt++;
    }

    void append(const E& item){
        tail->prev = tail->prev->next =
                new Link<E>(item,tail->prev,tail);
        cnt++;
    }

    E remove(){
        if(curr->next == tail)
            return nullptr;
        Link<E>* temp = curr->next;
        E item = temp->element;
        curr->next = curr->next->next;
        curr->next->prev = curr;
        delete temp;
        cnt--;
        return item;
    }

    void moveToStart(){
        curr = head;
    }

    void moveToEnd(){
        curr = tail->prev;
    }

    void next(){
        if(curr->next != tail)
            curr = curr->next;
    }

    void prev(){
        if(curr != head)
            curr = curr->prev;
    }

    int currPos() const{
        Link<E>* temp = head;
        int i = 0;
        while(temp != curr){
            i++;
            temp = temp->next;
        }
        return i;
    }

    void moveToPos(int pos){
        assert(pos>=0 && pos<=cnt);
        moveToStart();
        for(int i=0;i<pos;i++)
            curr = curr->next;
    }

    const E getValue() const{
        assert(curr->next != tail);
        return curr->next->element;
    }

    int length() const{
        return  cnt;
    }

};


#endif //DOUBLELINKLIST_DOUBLELINKLIST_H
