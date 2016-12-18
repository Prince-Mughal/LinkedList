#include "dQueue.h"
    Queue::Queue(){ length = 0; }
    void Queue::enque(const int& iData){ insertAtBack(iData); };
    void Queue::deque(int& oData){
                   int tmp = 0;
                   if(removeFromFront(tmp)) oData = tmp;
                   else errHandler();
                }
    int Queue::peek(void){
                   if(isEmpty())errHandler();
                   else return (head->data);
                      }
    int Queue::size(void){
               current = head;
               int len = 0;
               while(current != NULL)
                   len++;
               return len;
               }
   Queue::~Queue(){ length = 0; }
   /* Error Handler an Auxiliary Function */
   void Queue::errHandler(void){
        cerr<<"Error: Stack is Empty."<<endl;
        exit(EXIT_FAILURE);
        }
