#include "siStack.h"
    Stack::Stack(){ length = 0; }
    void Stack::push(const int& iData){ insertAtFront(iData); };
    void Stack::pop(int& oData){
                   int tmp = 0;
                   if(removeFromFront(tmp)) oData = tmp;
                   else errHandler();
                }
    int Stack::top(void){
                   if(isEmpty())errHandler();
                   else return (head->data);
                      }
    int Stack::size(void){
               current = head;
               int len = 0;
               while(current != NULL)
                   len++;
               return len;
               }
   Stack::~Stack(){ length = 0; }
   /* Error Handler an Auxiliary Function */
   void Stack::errHandler(void){
        cerr<<"Error: Stack is Empty."<<endl;
        exit(EXIT_FAILURE);
        }
