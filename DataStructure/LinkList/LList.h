//
// Created by rc on 19-4-12.
//

#ifndef LINKLIST_LLIST_H
#define LINKLIST_LLIST_H

#include "Link.h"
#include <assert.h>

template <typename E>
class LList:public Link<E>{
private:
    Link<E>* head;
    Link<E>* tail;
    Link<E>* curr;
    int cnt;

    void init(){
        head = tail = curr = new Link<E>();
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
    LList(){
        init();
    }

    ~LList(){
        removeall();
    }

    void insert(const E& item){
        curr->next = new Link<E>(item,curr->next);
        if(curr == tail)
            tail = curr->next;
        cnt++;
    }

    void append(const E& item){
        tail->next = new Link<E>(item, nullptr);
        tail = tail->next;
        cnt++;
    }

    E remove(){
        assert(curr->next != nullptr);
        Link<E>* temp = curr->next;
        E item = temp->element;
        curr->next = curr->next->next;
        if(tail == temp)
            tail = curr;
        delete temp;
        cnt--;
        return item;
    }

    void moveToStart(){
        curr = head;
    }

    void moveToEnd(){
        curr = tail;
    }

    void next(){
        if(curr != tail)
            curr = curr->next;
    }

    void prev(){
        if(curr != head) {
            Link<E> *temp = head;
            while (temp->next != curr) {
                temp = temp->next;
            }
            curr = temp;
        }
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
        assert(curr->next != nullptr);
        return curr->next->element;
    }

    int length() const{
       return  cnt;
    }

};

#endif //LINKLIST_LLIST_H
