#include <iostream>
using namespace std;
#include "../include/StackLinkedlist.h"



        StackLinkedlist:: StackLinkedlist(){
            this->head =NULL;
            this->tail=NULL;
            this->top=-1;
            this->max=10;
            cout<<"Stack linked list is created!!"<<endl;
        }

        StackLinkedlist::~ StackLinkedlist(){
            Node * current=this->head;
          while (current !=NULL){
            Node *temp=current;
            current=current->next;
            delete temp;
          }
         this->head=NULL;
         this->tail=NULL;
         cout<<"Stack linked list is destroyed!"<<endl;
       }
       
       void  StackLinkedlist::display(){

            Node * current =this->head;
            while(current!=NULL){
             cout<<current->data<<"   ";
             current=current->next;
            }
            cout<<endl;
            return;
       }


 
       void  StackLinkedlist::push(int data){
          Node * current=this->head;
          Node * newNode=new Node(data);
          this->top++;
         if(top==max){
            cout<<"The stack is full!"<<endl;
            return;
         }

        if (this->head==NULL && this->tail==NULL){
           this->head=newNode;
           this->tail=newNode;
          
        }else{
           newNode->prev=tail;
           this->tail->next=newNode;
           this->tail= newNode;

        }

      
       } 
       
        int  StackLinkedlist::pop (){
      if( top==-1){
        cout<<"Stack is empty"<<endl;
        return -1;
      }
      int data=tail->data;
      Node *temp=this->tail;
      if(head == tail){
        head=tail=NULL;
      }else{
        tail=tail->prev;
        tail->next=NULL;
      }
       delete temp;
        this->top--;
        return data;
       }