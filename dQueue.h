#include "qDoubly.h"
#ifndef QUEUE_H
#define QUEUE_H
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
