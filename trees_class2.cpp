#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;


class Node{
    public:

    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }


};

Node* buildTree(){
    int data;
    cout<<"enter the data :  "<<endl;
    cin>>data;

    // base case
    if(data==-1){
        return NULL;
    }

    // step A , B , C
    Node* root=new Node(data);
    cout<< "enter the data for left part of " << data<< " node "<< endl;
    root -> left=buildTree();


    cout<< "enter the data for right part of " << data<< " node "<< endl;
    root -> right=buildTree();

    return root;


}

bool kAncestor(Node* root,int& k,int& p){
    // base case
    if(root==NULL)
        return false;
    
    if(root->data == p)
        return true; 
     
    bool left=kAncestor(root->left,k,p);
    bool right=kAncestor(root->right,k,p);

    // check ho gayya ki p mila ya nahi mila 
    // vapis aana hoga 

    if(left || right){
        k--;
        if(k==0){
            cout<< "Answer hai : "<< root->data<<endl;
            k=-1;
        }
    }
    return left||right;


    
    


}
int main() {

    Node* root=NULL;
    root=buildTree();
    int k=1;
    int p=4;
    kAncestor(root,k,p);

    
    
 return 0;
}