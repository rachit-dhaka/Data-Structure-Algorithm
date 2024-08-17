#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(){
        this->data=0;
        this-> next=NULL;
    }
    Node(int data){
        this->data=data;

        this->next=NULL;
    }

    

};

// priting linked list
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp-> data << " ";
        temp=temp->next;

    }
}

// insert
//  i want to insert a node right at the head of linked list

void insertAthead(Node* &head,int data){
    // creat a new node
    Node* newnode=new Node(data);
    // attach 
    newnode->next=head;
    // replace head
    head=newnode;
    cout<<"hello world no , namaste duniya "<<endl;


}

int main() {

    
    // Node* first= new Node(10);
    // Node* Second=new Node(2);
    // Node* third=new Node(3);
    // Node* fourth=new Node(4);
    // Node* fifth=new Node(5);


    // first->next=Second;
    // Second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    // print(first);


    Node* head= NULL;
    
    insertAthead(head,20);
    insertAthead(head,50);
    insertAthead(head,60);



    print(head);




    





    
 return 0;
}