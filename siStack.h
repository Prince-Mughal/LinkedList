#include "sSingly.h"
#ifndef SISTACK_H
#define SISTACK_H
class Stack :public List{
    public:
    Stack();
    void push(const int&);
    void pop(int&);
    int top(void);
    int size(void);
    void errHandler(void);
   ~Stack();
    private:
        int length;
};
#endif
