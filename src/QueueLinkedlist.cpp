
#include "../include/QueueLinkedlist.h"

#include <iostream>
using namespace std;




        QueueLinkedlist:: QueueLinkedlist(){
            this->front =NULL;
            this->rear=NULL;
            this->size=0;
            this->max=10;
            cout<<"Queue linked list is created!!"<<endl;
        }

        QueueLinkedlist::~ QueueLinkedlist(){
            Node * current=this->front;
          while (current !=NULL){
            Node *temp=current;
            current=current->next;
            delete temp;
          }
         this->front=NULL;
          this->rear=NULL;
         cout<<"Queue linked list is destroyed!"<<endl;
       }
       
       void  QueueLinkedlist::display(){
            Node * current =this->front;
            while(current!=NULL){
             cout<<current->data<<"   ";
             current=current->next;
            }
            cout<<endl;
            return;
       }


 
       void  QueueLinkedlist::inqueue(int data){
          Node * current=this->front;
          Node * newNode=new Node(data);
          this->size++;
         if(size>max){
            cout<<"The Queue is full!"<<endl;
            return;
         }

        if (this->front==NULL && this->rear==NULL){
           this->front=newNode;
           this->rear=newNode;
          
        }else{
           newNode->prev=rear;
           this->rear->next=newNode;
           this->rear= newNode;

        }

      
       } 
       
    int  QueueLinkedlist::dequeue (){
      if( size==0){
        cout<<"Queue is empty"<<endl;
        return -1;
      }
       int data=front->data;
        Node *temp=this->front;
        if(this->front==this->rear){
            this->front=NULL;
            this->rear=NULL;
        }else{
            this->front=this->front->next;
            this->front->prev=NULL;

        }
        
       delete temp;
        this->size--;
        return data;
}