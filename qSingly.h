#ifndef QSINGLY_H
#define QSINGLY_H

#include <iostream>
#include <new>
#include <cstdlib>
using std::endl;
using std::cerr;
using std::cout;

/* Declaration*/
struct NODE{int data; NODE* next;};

class List{
    public:
             List(void);
        bool isEmpty(void);
        void insertAtFront(const int&);
        void insertAtBack(const int&);
        bool removeFromFront(int&);
        bool removeFromBack(int&);
        void print(void)const;
            ~List();
    protected:
        NODE* head;
        NODE* tail;
        NODE* current;
        NODE* getNewNode(const int&);
};
#endif
