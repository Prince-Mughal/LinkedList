#include "qSingly.h"
#ifndef SIQUEUE_H
#define SIQUEUE_H
class Queue :public List{
    public:
    Queue();
    void enque(const int&);
    void deque(int&);
    int peek(void);
    int size(void);
    void errHandler(void);
   ~Queue();
    private:
        int length;
};
#endif
