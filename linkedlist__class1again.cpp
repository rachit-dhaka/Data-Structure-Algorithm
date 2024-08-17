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
            this->data=data;
            this->next=NULL;

        }


    };


void print(node* &head){

    node* temp=head;
    while(temp!=NULL){
        cout<< temp->data << " " ;
        temp=temp->next;

    }
}

// insert a new node at head of the linked list
void insertathead(node* &head , node* &tail,int data){

    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
    }


    // step 1 : created at new ndoe
    node* newNode=new node(data);
    // step 2 : 
    newNode->next=head;
    // step 3
    head=newNode;
}

// insert at the tail of the linked list 

void insertattail(node* &head,node* &tail, int data){

    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //step 1 : create a new node
    node* newNode=new node(data);
    // step 2 
    tail->next=newNode;
    // step 3
    tail=newNode;

    


}

// find the length of the linked list
int FindLength(node* &head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;

    }
    return len;



     
}


// insert at position in the linked list

void insertatposition( int data,int position ,node* &head , node* &tail){
    if(head==NULL){
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    if(position==0){
        insertathead(head, tail,data);
        return;

    }

    int len=FindLength(head);

    if(position==len){
        insertattail(head, tail ,data);
        return;

    }

    // step 1 find that position : prev and current 
    int i=1;
    node* prev=head;
    while(i<position){
        prev=prev->next;
        i++;
    }
    node* curr = prev->next;


    // step 2 create a new node

    node* newNode =new node(data);

    // step 3 new node-> next = current 

    newNode->next=curr;

    // step 4 previous -> next = new node
    prev->next=newNode;
    


    
}


int main() {

      node* head=NULL;
      node* tail=NULL;


      insertathead(head,tail,40);
      insertathead(head,tail,30);
      insertathead(head,tail,20);
      insertathead(head,tail,10);
      insertattail(head,tail,99);
      insertattail(head,tail,89);
      insertattail(head,tail,79);

     

      print(head);
      cout<<endl;

      insertatposition(1011,0,head,tail);

      print(head);
            cout<<endl;

      insertatposition(2011,8,head, tail);

           print(head);





         
    
    


 return 0;
}





