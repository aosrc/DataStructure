//
// Created by rc on 19-4-17.
//

#ifndef ARRAYBASEDSTACK_V2_0_ASTACK2_H
#define ARRAYBASEDSTACK_V2_0_ASTACK2_H

#define defaultSize 100

template <class E>
class AStack2{
private:
    int maxsize;
    int top1;
    int top2;
    E* listArray;

public:
    AStack2(int size = defaultSize){
        maxsize = size;
        top1 = 0;
        top2 = maxsize-1;
        listArray = new E[size];
    }

    ~AStack2() {
        delete[] listArray;
    }

    void clear(int side){
        if(side == 1)
            top1 = 0;
        else
            top2 = maxsize - 1;
    }

    bool push(int side,const E& item){
        if(top1+1 >= top2)
            return false;
        if(side == 1)
            listArray[top1++] = item;
        else
            listArray[top2--] = item;
        return true;
    }

    bool pop(int side,E& item){
        if(side == 1 && top1 == 0)
            return false;
        if(side == 2 && top2 == maxsize - 1)
            return false;
        if(side == 1)
            item = listArray[--top1];
        else
            item = listArray[++top2];
        return true;
    }

    bool topValue(int side,E& item) const{
        if(side == 1 && top1 == 0)
            return false;
        if(side == 2 && top2 == maxsize - 1)
            return false;
        if(side == 1)
            item = listArray[top1-1];
        else
            item = listArray[top2+1];
        return true;
    }

    int length(int side) const{
        if(side == 1)
            return top1;
        else
            return maxsize - top2 - 1;
    }
};


#endif //ARRAYBASEDSTACK_V2_0_ASTACK2_H
