#include <iostream>
using namespace std;
#include "../include/StackLinkedlist.h"
#include "../include/QueueLinkedlist.h"
#include "../include/QueueArray.h"

int main(){
// cout<<"================ Stack with linked list implementation ================="<<endl;
//  StackLinkedlist s;
//  s.push(10);
//  s.push(20);
//  s.push(30);
//  s.push(40);
//  s.push(50);
//  s.push(60);
//  s.push(70);
//  s.push(80);
//  s.push(90);
//  s.push(100); 
 
//  cout<<"The stack after push : "<<endl;
//  s.display();


//  cout<<"New pop : "<<s.pop()<<endl;
//  cout<<"New pop : "<<s.pop()<<endl;
//  cout<<"New pop : "<<s.pop()<<endl;
//  cout<<"New pop : "<<s.pop()<<endl;
//  cout<<"New pop : "<<s.pop()<<endl;
 

//  cout<<"The stack after pop : "<<endl;
//  s.display();



//  cout<<"================ Queue with linked list implementation ================="<<endl;

// QueueLinkedlist q;

// q.inqueue(10);
// q.inqueue(20);
// q.inqueue(30);
// q.inqueue(40);
// q.inqueue(50);
// q.inqueue(60);
// q.inqueue(70);
// q.inqueue(80);
// q.inqueue(90);
// q.inqueue(100);

// cout<<"The queue after inqueue : "<<endl;
// q.display();



//  cout<<"New pop : "<<q.dequeue()<<endl;
//  cout<<"New pop : "<<q.dequeue()<<endl;
//  cout<<"New pop : "<<q.dequeue()<<endl;
//  cout<<"New pop : "<<q.dequeue()<<endl;
//  cout<<"New pop : "<<q.dequeue()<<endl;

// cout<<"The queue after dequeue : "<<endl;
// q.display();


//  cout<<"================ Queue with array implementation ================="<<endl;

// QueueArray qa;

// qa.inqueue(10);
// qa.inqueue(20);
// qa.inqueue(30);
// qa.inqueue(40);
// qa.inqueue(50);
// qa.inqueue(60);
// qa.inqueue(70);
// qa.inqueue(80);
// qa.inqueue(90);
// qa.inqueue(100);


// cout<<"The queue after inqueue : "<<endl;
// qa.display();


//  cout<<"New pop : "<<qa.dequeue()<<endl;
//  cout<<"New pop : "<<qa.dequeue()<<endl;
//  cout<<"New pop : "<<qa.dequeue()<<endl;
//  cout<<"New pop : "<<qa.dequeue()<<endl;
//  cout<<"New pop : "<<qa.dequeue()<<endl;

//  cout<<endl;


//  cout<<"The queue after dequeue : "<<endl;
// qa.display();

///////////////////////////////////////////////////////

StackLinkedlist s1;

 cout<<"The factorial is : "<< s1.factorial(5)<<endl;

///////////////////////////////////////////////////////

StackLinkedlist s;
s.push(4);
s.push(1);
s.push(3);
s.push(2);
s.push(5);

cout<<"The stack before Bubble sort : "<<endl;
 s.display();

 s.bubbleSort();

 cout<<"The stack after Bubble sort : "<<endl;
 s.display();


////////////////////////////////////////////////////

s.push(8);
s.push(10);
s.push(6);
s.push(9);
s.push(7);

 cout<<"The stack before selection sort : "<<endl;
 s.display();

 s.selectionSort();

 cout<<"The stack after selection sort : "<<endl;
 s.display();

 ///////////////////////////////////////////////////

StackLinkedlist s2;
 
s2.push(1);
s2.push(2);
s2.push(3);
s2.push(4);
s2.push(5);
s2.push(6);
s2.push(7);
s2.push(8);
s2.push(9);
s2.push(10);

 cout<<"The stack now holds : "<<endl;
 s2.display();

 cout<<"The index of this element using binary search : "<<endl;
 cout<<s2.binarySearch(3)<<endl;

    return 0;
}