#ifndef QUEUE_LinkedList
#define QUEUE_LinkedList
#include "Node.h"

class QueueLinkedlist{
        public: 
        int size;
        int max;
        Node *front;
        Node *rear;
        QueueLinkedlist();
       ~ QueueLinkedlist();
       void display();
       void inqueue(int data);
       int dequeue ();
     

};


#endif 