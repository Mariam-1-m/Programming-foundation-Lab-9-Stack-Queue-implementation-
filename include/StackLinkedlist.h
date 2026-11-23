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
       void push(int data);
       int pop ();
       int factorial( int n);
       void bubbleSort();
       void selectionSort();
       int binarySearch(int num);
       Node * getMid(Node *min,Node * max);

};


#endif