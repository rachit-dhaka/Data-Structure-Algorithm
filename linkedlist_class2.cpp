// doubly linked list
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


class node{
    public:
    int data;
    node* prev;
    node* next;


    node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<< temp->data <<endl;
        temp=temp->next;

    }
    

}

int getlength(node* &head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;

        len++;

    }
    return len;

    

}


void insertathead(int data, node* &head,node* &tail){

    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;


    }


    node* newNode=new node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;



}


void insertattail(int data,node* &head,node* &tail){
    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;

    }


    node* newNode=new node(data);
    newNode->prev=tail;
    tail->next=newNode;
    tail=newNode;

}


 void insertatposition(int position, int data,node* &head, node* &tail){

    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;

    }

    if(position==1){
        insertathead(data,head,tail);
        return;


    }

    int length=getlength(head);
    if(position>length){
        insertattail(data,head, tail);
        return;
    }

    // step 1 find prevNode and currNode
    int i=1;
    node* prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;

    }
    node* currNode=prevNode;

    // step 2
    node* newNode=new node(data);

    prevNode->next=newNode;
    newNode->prev=prevNode;
    currNode->prev=newNode;
    newNode->next=currNode;
    







 }


 void deletefromPosition(int postion, node* &head, node* &tail){

    if(head==NULL){

        cout<<" Linked List Nahi hai "<<endl;
        return;
    }
    // delteing only 1 node
    if(head->next==NULL){
        node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;

    }
    int len=getlength(head);
    if(postion>len){
        cout<<"Koi sahi number dal "<<endl;

    }
    
    // deleting head
    if(postion==1){
        node* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;

    }
    
    // deleting tail
    if(postion==len){
        node* temp=tail;
        tail=tail->prev;
        temp->prev=NULL;
        tail->next=NULL;

        delete temp;

    }

    // deleting node at paticular postion

    // step 1 find positon left , right , current 
    int i=1;
    node* left=head;
    while(i<postion-1){
        left=left->next;
        i++;

    }

    node* curr=left->next;
    node* right=curr->next;

    // step 2
    left->next=right;
    right->prev=left;
    curr->prev=NULL;
    curr->next=NULL;

    delete curr;








    



    

 }

int main() {

    node* first=new node(10);
    node* second=new node(20);
    node* third=new node(30);

    node* head=first;
    node* tail=third;


    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    third->prev=second;

    // print(head);
    // cout<<endl;


    insertathead(1,head,tail);

    // print(head);
    // cout<<endl;


    insertattail(101,head,tail);
    // print(head);
    // cout<<endl;


    insertathead(11,head, tail);
    print(head);
    cout<<endl;

    deletefromPosition(10,head, tail);
    print(head);
    cout<<endl;


    // insertatposition(2,6969,head,tail);
    // print(head);
    // cout<<endl;




    
 return 0;
}