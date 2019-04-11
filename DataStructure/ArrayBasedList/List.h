//
// Created by rc on 19-4-11.
//

#ifndef ARRAYBASEDLIST_LIST_H
#define ARRAYBASEDLIST_LIST_H

template <typename E>
class List{
private:
    void operator=(const List&){}
    List(const List&) {}

public:
    List() {}
    virtual ~List() {}

    virtual void clear() = 0;

    virtual void insert(const E&) = 0;

    virtual void append(const E&) = 0;

    virtual E remove() = 0;

    virtual void prev() = 0;

    virtual void next() = 0;

    virtual int length() const = 0;

    virtual int currPos() const = 0;

    virtual void moveToPos(int) = 0;

    virtual const E& getValue() const = 0;

    virtual void moveToStart() = 0;

    virtual void moveToEnd() = 0;


};


#endif //ARRAYBASEDLIST_LIST_H
