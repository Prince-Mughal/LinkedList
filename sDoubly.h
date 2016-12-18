#ifndef SDOUBLY_H
#define SDOUBLY_H
#include <iostream>
#include <new>
#include <cstdlib>
using std::endl;
using std::cerr;
using std::cout;

/* Declaration*/
struct NODE{int data; NODE* next; NODE* prev;};

class List{
    public:
             List(void);
        bool isEmpty(void);
        void insertAtFront(const int&);
        void insertAtBack(const int&);
        bool removeFromFront(int&);
        bool removeFromBack(int&);
        void print_forward(void)const;
        void print_backward(void)const;
            ~List();
    protected:
        NODE* head;
        NODE* tail;
        NODE* current;
        NODE* getNewNode(const int&);
};
#endif
