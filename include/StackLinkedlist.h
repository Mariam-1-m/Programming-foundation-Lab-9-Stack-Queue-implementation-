#ifndef STACK_LINKEDLIST
#define STACK_LINKEDLIST 
#include "Node.h"

class StackLinkedlist{
        public: 
        int top;
        int max;
        Node *head;
        Node *tail;
        StackLinkedlist();
       ~ StackLinkedlist();
       void display();
       int pop ();
       void push(int data);
     

};


#endif