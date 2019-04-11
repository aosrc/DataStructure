//
// Created by rc on 19-4-11.
//

#ifndef ARRAYBASEDLIST_ALIST_H
#define ARRAYBASEDLIST_ALIST_H

#include <assert.h>
#include "List.h"
#define defaultSize 100

template <typename E>
class AList: public List<E>{
private:
    int maxSize;
    int listSize;
    int curr;
    E* listArray;

public:
    AList(int size = defaultSize){
        maxSize = size;
        listSize = curr = 0;
        listArray = new E[maxSize];
    }

    ~AList(){
        delete [] listArray;
    }

    void clear(){
        delete[] listArray;
        curr = listSize = 0;
        listArray = new E[maxSize];
    }

    void insert(const E& item){
        assert(listSize < maxSize);
        for(int i = listSize;i > curr;i--){
            listArray[i] = listArray[i-1];
        }
        listArray[curr] = item;
        listSize++;
    }

    void append(const E& item){
        assert(listSize < maxSize);
        listArray[listSize++] = item;
    }

    E remove(){
        assert(curr>=0 && curr < listSize);
        E item = listArray[curr];
        for(int i = curr;i<listSize-1;i++){
            listArray[i] = listArray[i+1];
        }
        listSize--;
        return item;
    }

    void prev(){
        if(curr != 0)
            curr--;
    }

    void next(){
        if(curr < listSize)
        curr++;
    }

    void moveToStart(){
        curr = 0;
    }

    void moveToEnd(){
        curr = listSize;
    }

    void moveToPos(int pos){
        assert(pos >= 0 && pos <= listSize);
        curr = pos;
    }

    const E& getValue() const{
        assert(curr>=0 && curr<listSize);
        return listArray[curr];
    }

    int length() const{
        return listSize;
    }

    int currPos() const{
        return curr;
    }

};

#endif //ARRAYBASEDLIST_ALIST_H
