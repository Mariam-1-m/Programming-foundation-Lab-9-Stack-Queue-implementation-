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


  
      int StackLinkedlist::factorial(int n){
        
        if(n==0){
          return 1;
        }
       for (int i=n;i>0;i--){
        this->push(i);
       }
         int tempProduct;
         for (int i=0;i<n-1;i++){
          int num1=this->pop();
          int num2=this->pop();

        tempProduct=num1*num2;
          this->push(tempProduct);
         }

         return tempProduct;
      }


      void swap(int & num1,int& num2){
       int temp =num1;
       num1=num2;
       num2=temp;
      }

       void StackLinkedlist::bubbleSort(){
        if(this->head==NULL){
          return;
        }
         int size=this->top+1;
         Node *current=this->head;
         int flag=0;
         for(int i=0 ;i<size -1&& flag==0 ;i++){
          current=this->head;
          flag=1;
         for(int j=0;j<size-1-i;j++){
              if(current->data>current->next->data){
                swap(current->data,current->next->data);
                flag=0;
              }
              current=current->next;

         }

         }
  

       } 
      
      
       void StackLinkedlist::selectionSort(){
        int size=this->top+1;
         Node *current=this->head->next;
         Node *minIndex=this->head;
         Node *startIndex=this->head;
         while(startIndex!=NULL){
          minIndex=startIndex;
          current=startIndex->next;
        
         while(current!=NULL){
          if(current->data<minIndex->data)
          {
            minIndex=current;
          }
          current=current->next;
         }
          swap(startIndex->data ,minIndex->data);

         startIndex=startIndex->next;
        }
       }
       
       
        Node* StackLinkedlist::getMid(Node *min,Node * max){
        Node * front=min;
        Node * back=max;
        while (front!=back && back!=front->next)
        {
          front=front->next;
          back=back->prev;
        }
        
        return front;
       }

  
       int StackLinkedlist::binarySearch(int num){
         Node * min=this->head;
         Node * max=this->tail;
         Node * mid=getMid(min,max);
        
         int dataIndex=0;
         while(mid->data!=num && min<max){
          if(num>mid->data){
            min=mid->next;
          }else{
            max=mid->prev;
          }
          mid=getMid(min,max);
         }
         if(mid->data!=num){
          cout<<"Element not found"<<endl;
          return -1;
         }

         Node *current=this->head;
         while(current->data!=mid->data){
          dataIndex++;
          current=current->next;
         }
         return dataIndex;
          
       }
     