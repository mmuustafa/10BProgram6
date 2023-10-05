#ifndef __SORTEDSET_H__
#define __SORTEDSET_H__
#include "IntList.h"

class SortedSet : public IntList {
public:
    SortedSet();
    SortedSet(const SortedSet& cpySet);
    SortedSet(const IntList& cpyList);
    ~SortedSet();
    
    bool in(int value) const;
    SortedSet operator|(const SortedSet& cpySet) const;
    SortedSet operator&(const SortedSet& cpySet) const;
    
    void add(int value);
    void push_front(int value);
    void push_back(int value);
    void insert_ordered(int value);
    SortedSet& operator|=(const SortedSet& cpySet);
    SortedSet& operator&=(const SortedSet& cpySet);
};

#endif