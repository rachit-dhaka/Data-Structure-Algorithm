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

bool checking(node* &NODE){
    node* temp=NODE->next;
    while(NODE!=NULL )
    for(int){
        if(temp!=NODE){
            temp=temp->next;
            cout<<"nahi hai "<<endl;
            

            // return false;

        }
        else{
            return true;
        }
    }

}

int main() {

    node*first= new node(10);
    node*second=new node(20);
    node*third=new node(30);
    node* fourth=new node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;
   

    // checking(first);

    // if(checking(first)==true){
    //     cout<<"ciuclar"<<endl;

    // }
    int ans=checking(first);

    if(ans==true){
        cout<<"circular"<<endl;

    }
    else{
        cout<<"not"<<endl;

    }




    
 return 0;
}