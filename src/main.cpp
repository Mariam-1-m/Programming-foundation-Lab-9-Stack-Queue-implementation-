#include <iostream>
using namespace std;
#include "../include/StackLinkedlist.h"
#include "../include/QueueLinkedlist.h"
#include "../include/QueueArray.h"

int main(){
cout<<"================ Stack with linked list implementation ================="<<endl;
 StackLinkedlist s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 s.push(50);
 s.push(60);
 s.push(70);
 s.push(80);
 s.push(90);
 s.push(100); 
 
 cout<<"The stack after push : "<<endl;
 s.display();


 cout<<"New pop : "<<s.pop()<<endl;
 cout<<"New pop : "<<s.pop()<<endl;
 cout<<"New pop : "<<s.pop()<<endl;
 cout<<"New pop : "<<s.pop()<<endl;
 cout<<"New pop : "<<s.pop()<<endl;
 

 cout<<"The stack after pop : "<<endl;
 s.display();



 cout<<"================ Queue with linked list implementation ================="<<endl;

QueueLinkedlist q;

q.inqueue(10);
q.inqueue(20);
q.inqueue(30);
q.inqueue(40);
q.inqueue(50);
q.inqueue(60);
q.inqueue(70);
q.inqueue(80);
q.inqueue(90);
q.inqueue(100);

cout<<"The queue after inqueue : "<<endl;
q.display();



 cout<<"New pop : "<<q.dequeue()<<endl;
 cout<<"New pop : "<<q.dequeue()<<endl;
 cout<<"New pop : "<<q.dequeue()<<endl;
 cout<<"New pop : "<<q.dequeue()<<endl;
 cout<<"New pop : "<<q.dequeue()<<endl;

cout<<"The queue after dequeue : "<<endl;
q.display();


 cout<<"================ Queue with array implementation ================="<<endl;

QueueArray qa;

qa.inqueue(10);
qa.inqueue(20);
qa.inqueue(30);
qa.inqueue(40);
qa.inqueue(50);
qa.inqueue(60);
qa.inqueue(70);
qa.inqueue(80);
qa.inqueue(90);
qa.inqueue(100);


cout<<"The queue after inqueue : "<<endl;
qa.display();


 cout<<"New pop : "<<qa.dequeue()<<endl;
 cout<<"New pop : "<<qa.dequeue()<<endl;
 cout<<"New pop : "<<qa.dequeue()<<endl;
 cout<<"New pop : "<<qa.dequeue()<<endl;
 cout<<"New pop : "<<qa.dequeue()<<endl;

 cout<<endl;


 cout<<"The queue after dequeue : "<<endl;
qa.display();

    return 0;
}