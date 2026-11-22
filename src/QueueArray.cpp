
#include "../include/QueueArray.h"

#include <iostream>
using namespace std;




        QueueArray:: QueueArray(){
            this->front =-1;
            this->rear=-1;
            this->Queue=new int[10];
            this->size=0;
            this->max=10;
            cout<<"Queue array is created!!"<<endl;
        
        }
        QueueArray::~ QueueArray(){
        
          for(int i=this->front;i<this->rear;i++){
           
            Queue[i]=0;
          }
         this->front=-1;
         this->rear=-1;
          cout<<"Queue array is destroyed!"<<endl;
       }
       
       void  QueueArray::display(){

          for(int i=this->front;i<=this->rear;i++){
           cout<<Queue[i]<<"  ";
          }

         cout<<endl;
       }


 
       void  QueueArray::inqueue(int data){
         
          size++;
         if(size>max){  //this->rear>this->front
            cout<<"The Queue is full!"<<endl;
            return;
         }
          if(this->front==-1 && this->rear==-1){
            this->front++;
          }
          this->rear=(this->rear+1)%max;
          
           Queue[rear]=data;
       } 
       



      int  QueueArray::dequeue (){
         if( size==0){
         cout<<"Queue is empty"<<endl;
         return -1;
         }

          int  data;
          data=Queue[front];
          Queue[front]=0;
        if(this->front ==this->rear ){
         
         this->front=-1;
         this->rear=-1;
      
        }else{
         this->front=(this->front+1)%max;
        }
        
         this->size--;
        return data;
       }