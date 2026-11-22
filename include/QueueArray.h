
#ifndef QueueArray_H
#define QueueArray_H
#include "Node.h"

class QueueArray{

        public: 
        int size;
        int max;
        int * Queue ;
        int front;
        int rear;
        QueueArray();
        ~QueueArray();
       void display();
       void inqueue(int data);
       int dequeue ();
     

};
#endif
