#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class node{
    public:

    int data;
    node *next;

    node(){
        this->data=0;
        this->next=NULL;

    }
    node(int data){
        this-> data=data;
        this->next=NULL;

    }
};


void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;

    }
}

bool loopPresent(node* &head){
    if(head==NULL){
        cout<<"loop empty hai "<<endl;
        return false;

    }
    
    node* slow=head;
    node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }

        if(fast==slow){
            return true;

        }
    }

    return false;




}

node* StartingPoint(node* &head){

    if(head==NULL){
        cout<<"Linked list khali hai "<<endl;
        return NULL;

    }

    node* fast=head;
    node* slow=head;

    while(fast!=NULL){
        fast=fast->next;

        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }

        if(fast==slow){
            slow=head;
            break;

        }

    }

    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;

    }
    return fast;
}

node* removeLOOP(node* &head){

    if(head==NULL){
        cout<<"Linked list khali hai "<<endl;
        return NULL;

    }

    node* fast=head;
    node* slow=head;
    


    while(fast!=NULL){
        fast=fast->next;

        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }

        if(fast==slow){
            slow=head;
            break;

        }

    }
    node* prev=fast;

    while(slow!=fast){
        prev=fast;
        slow=slow->next;
        fast=fast->next;

    }
    prev->next=NULL;
    return slow;

    
}



int main() {
    node*first= new node(10);
    node*second=new node(20);
    node*third=new node(30);
    node* four=new node(40);
    node* five=new node(50);
    node* six=new node(60);
    node* seven=new node(70);
    node* eight=new node(80);
    node* nine=new node(90);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;
    seven->next=eight;
    eight->next=nine;
    nine->next=seven;

    // print(first);
    
    // if(loopPresent(first)==true){
    //     cout<<"loop hai "<<endl;

    // }
    // else{
    //     cout<<"loop nahi hai "<<endl;

    // }

    

    cout<< " starting point "<< StartingPoint(first)->data<<endl;
    removeLOOP(first);
    print(first);

     if(loopPresent(first)==true){
        cout<<"loop hai "<<endl;

    }
    else{
        cout<<"loop nahi hai "<<endl;

    }







 return 0;
}