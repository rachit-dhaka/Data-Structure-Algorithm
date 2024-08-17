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

int getlength(node* &head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;

        len++;

    }
    return len;
}

 node* middle(node* &head){
    if(head==NULL){
        cout<<"linked list khali hai "<<endl;
        return NULL;

    }

    node* slow=head;
    node* fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }
        else{
            return slow;

        }

    
    }

 }

 node* reverse(node* &head){
    if(head==NULL){
        cout<<"linked list khali hai "<<endl;
        return NULL;

    }

    node* prev=NULL;
    node* curr=head;
    node* forward=curr->next;

    while(curr!=NULL){
        forward=curr->next;


        curr->next=prev;
        prev=curr;
        forward=curr;

    }
    return prev;




 }

 bool CheckPalindrome(node* &head){
     if(head==NULL){
        cout<<"linked list khali hai "<<endl;
        return true;

     }

     if(head->next==NULL){
        return true;

     }


    //  step 1 check middle 

    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;

        }
        
        
    }
    //  step 2 reverse linked list after middle node
    node* reverseLLkaHead=reverse(slow->next);
    slow->next=reverseLLkaHead;
    
    // step 3 
    node* temp1=head;
    node* temp2=reverseLLkaHead;

    while(temp2!=NULL){
        if(temp1->data != temp2->data){
            // not a palindrome 
            
            return false;

        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;

        }
    }
    return true;
}

void revomeDuplicate(node* &head){
    node* curr=head;
    while(curr!=NULL){
        
        if((curr->next!=NULL)&&(curr->data ==curr->next->data)){
            curr->next=curr->next->next;


        }
        else{
            curr=curr->next;

        }
        
    }

}









int main() {

    node* first=new node(10);
    node* second=new node(20);
    // node* third=new node(20);
    // node* four=new node(30);
    // node* five=new node(40);
    // node* six=new node(40);

    first->next=second;
   

    print(first);
    cout<<endl;
    
    CheckPalindrome(first);

    
    

   



    






    


    
 return 0;
}