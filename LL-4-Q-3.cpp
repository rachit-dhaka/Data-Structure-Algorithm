// sorting 0's 1's and 2's
// county approach 
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
        cout<<temp->data<<"  ";
        

        temp=temp->next;

    }
}

void sorting(node* &head){

    // step 1 find the count of 0,1,2
    int zero=0;
    int one=0;
    int two=0;
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
            temp=temp->next;
        }
        else if(temp->data==1){
            one++;
            temp=temp->next;
        }
        else if(temp->data==2){
            two++;

            temp=temp->next;
        }

    }

    // step 2 fill 0,1,2 in thw linked lsit
    temp=head;
    while(temp!=NULL){
        while(zero--){
            temp->data=0;
            temp=temp->next;
            
        }
        while(one--){
            temp->data=1;
            temp=temp->next;
            
        }
        while(two--){
            temp->data=2;
            temp=temp->next;
            
        }
    }
}

node* sorting2(node* &head){

    

    node* zeroHead=new node(-1);
    node* zeroTail=zeroHead;

    node* oneHead=new node(-1);
    node* oneTail=oneHead;

    node* twoHead=new node(-1);
    node* twoTail=twoHead;  

    // travese the linked list

    node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            // taking out the zero wali node
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            // adding the zero node to the dummy linked list
            zeroTail->next=temp;
            zeroTail=temp;

        }
        else if(curr->data==1){

            // taking out the zero wali node
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            // adding the zero node to the dummy linked list
            oneTail=temp;
            oneTail->next=temp;

        }
        else if(curr->data==2){
            // taking out the zero wali node
            node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            // adding the zero node to the dummy linked list
            twoTail->next=temp;
            twoTail=temp;

        }
    }

    // ab yaha par zero , one , two linked list ready hai 
    // join them 

    // modify one head 
    node* temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    // modify two head
    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;

    //  join them 

   if(oneHead!=NULL){
    // one wali list is not empty
    zeroTail->next=oneHead;

    if(twoHead!=NULL){
        oneTail->next=twoHead;

    }


   }
   else{
    // one wali list is empty 
    if(twoHead!=NULL){
        zeroTail->next=twoHead;
    }
   }


//    remove the dummy node
temp=zeroHead;
zeroHead=zeroHead->next;
temp->next=NULL;
delete temp;


return zeroHead;

}


int main() {
    node* first=new node(2);
    node* second=new node(1);
    node* third=new node(1);
    node* four=new node(0);
    node* five=new node(0);
    node* six=new node(2);
    node* seven=new node(1);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=five;
    five->next=six;
    six->next=seven;

    print(first);
    cout<<endl;

    
    

    // sorting(first);
    // print(first);
    cout<<"printing the sorted list"<<endl;
    sorting2(first);
    print(first);


    return 0;

}