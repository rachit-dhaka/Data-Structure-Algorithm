#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

class Queue{
    public:
    
    int *arr;
    int size;
    int front;
    int rear;
    
    Queue(int size){
        this->size=size;
        arr= new int [size];
        front =0;
        rear=0;
    }   

    void push(int data){
        if(rear==size){
            cout<< " Queue Bar gaya hai "<<endl;

        }
        else{
            arr[rear]=data;
            rear++;
        }
    } 

    void pop(){
        if(front==rear){
            cout<< " Queue Khali hai " << endl;

        }
        else{
            arr[front]=-1;
            front ++;

            if(front==rear){
                front =0;
                rear=0;

            }
        }
    }


    int getFront(){
        if(front==rear){
            cout<<" queue khali hai "<<endl;
            return-1;


        }
        else{
            return arr[front];
                     }


    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;

        }
    }

    int getSize(){
        return rear-front ;
           
    }


};


class Cqueue{
    public:

    int size;
    int *arr;
    int front;
    int rear;


    CirQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;

    } 

    void push(int data){

        // queue full hai 
        // single element case -> first element 
        // circular nature 
        // default 

        if(front ==0 && rear==(size-1)){
            cout<< " Queue Full hai "<<endl;


        }
        else if(front==rear==-1){
            front =0;
            rear=0;
            arr[rear]=data;


        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;

        }

        else{
            rear++;
            arr[rear]=data;
        }


    }

    void pop(){
        // empty check 
        // single element check 
        // circular nature 
        // default flow

        if(front==rear==-1){
            cout<<" queue is empty"<<endl;

        }

        else if (front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;

        }
        else if(front==size-1){
            front=0;


        }
        else{
            front ++;
              
        }
    }





};

// doubly ended queue 
class Deque{
    public:

    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;

    }


    void pushRear(int data){
        // checking wether it is full
        // 1st element 
        // circular nature 
        // defualt 

        if(front ==0 && rear=size-1){
            cout<< " Queue is full";
            return;

        }
        
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;

        }

        else{
            rear++;
            arr[rear]=data;
        }

    }

    void pushFront(int data){
         if(front ==0 && rear=size-1){
            cout<< " Queue is full";
            return;

        }
        else if(front==rear==-1){
            front =0;
            rear=0;
            arr[front]=data;


        }





    }


};


int main() {

    Queue q(10);

    q.push(3);
    q.push(1);
    q.push(2);
    q.push(4);

    cout<< " size of the queue is "<< q.getSize()<<endl;
     
    q.pop();

     cout<< " size of the queue is "<< q.getSize()<<endl;

    
    cout<<"Front element of queue is "<< q.getFront()<<endl;




    




 return 0;
}