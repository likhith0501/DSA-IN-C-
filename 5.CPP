//Queue Using Array
#include <iostream>
using namespace std;

#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

void enqueue(int x){
    if(rear==MAX-1)
        cout<<"Queue Overflow\n";
    else{
        if(front==-1) front=0;
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 || front>rear)
        cout<<"Queue Underflow\n";
    else{
        cout<<"Deleted element: "<<queue[front]<<endl;
        front++;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
}