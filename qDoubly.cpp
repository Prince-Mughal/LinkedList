#include "qDoubly.h"

        List::List(void){
                       head    = NULL;
                       tail    = NULL;
                       current = NULL;
                   }
        bool List::isEmpty(void){
                       if((head == NULL) && (tail == NULL) )
                           return true;
                       else
                           return false;
                   }
        void List::insertAtFront(const int& iData){
                       NODE* newNode = getNewNode(iData);
                       if(isEmpty() == true){
                           head = newNode;
                           tail = newNode;
                      }else{
                           newNode->next = head;
                           head->prev = newNode;
                           head = newNode;}
                   }
        void List::insertAtBack(const int& iData){
                       NODE* newNode = getNewNode(iData);
                       if(isEmpty() == true){
                           head = newNode;
                           tail = newNode;
                      }else{
                           newNode->prev = tail;
                           tail->next = newNode;
                           tail = newNode;}

                   }
        bool List::removeFromFront(int& oData){
                       NODE* tmp = head;
                       if(isEmpty() == true){
                           return false;
                      }else{
                          if(head == tail){
                             head = NULL;
                             tail = NULL;
                          }else{
                               head = head->next;
                               head->prev = NULL;}
                           oData = tmp->data;
                           delete tmp;
                           return true;}

                   }
        bool List::removeFromBack(int& oData){
                       NODE* tmp = tail;
                       if(isEmpty() == true){
                           return false;
                      }else{
                           if(head == tail){
                               head = NULL;
                               tail = NULL;
                          }else{
                               current = head;
                               while(current->next != tail)
                                   current = current->next;
                               tail = current;
                               tail->next = NULL;}
                           oData = tmp->data;
                           delete tmp;
                           return true;}
                   }
             List::~List(){
                       head = NULL;
                       
                   }
        NODE* List::getNewNode(const int& iData){
                    NODE* newNode = new NODE;
                    if(newNode == NULL){
                        cerr<<"Error: Out of Memory."<<endl;
                        exit(EXIT_FAILURE);}
                    newNode->data = iData;
                    newNode->next = NULL;
                    newNode->prev = NULL;
                    return newNode;
                    }
       void List::print_forward(void) const{
                   for(NODE* i = head; i != NULL; i = i->next){
                       cout<<i->data<<endl;}
                  }
       void List::print_backward(void) const{
                   for(NODE* i = tail; i != NULL; i = i->prev){
                       cout<<i->data<<endl;}
                  }
