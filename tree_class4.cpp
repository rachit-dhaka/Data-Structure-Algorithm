#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;


class node{
    public:
    
    int data;
 node* left;
 node* right;

 node (int data){
        this->data=data;
        left=NULL;
        right=NULL;
    
    }
};
 node* buildTree(){
    int data;
    cout<<"enter the data :  "<<endl;
    cin>>data;

    // base case
    if(data==-1){
        return NULL;
    }

    // step A , B , C
 node* root=new node(data);
    cout<< "enter the data for left part of " << data<< " node "<< endl;
    root -> left=buildTree();


    cout<< "enter the data for right part of " << data<< " node "<< endl;
    root -> right=buildTree();

    return root;


}

int findPosition(int arr[],int n, int element){
    for(int i=0;i<n;i++){
        if(element==arr[i]) return i;
        
    }
    return -1;


}

// build the tree from inorder and postorder traversal 
 node* buildtreeInorderPostOrder(int inorder[],int preorder[],int size, int Preindex , int inorderStart , int inorderEnd){
    // base case
    if(Preindex >= size|| inorderStart>inorderEnd ) return NULL;

    // step A : create a root node
    int element=preorder[Preindex++];
 node* root=new node(element);

    int pos=findPosition(inorder, size,element);
    

    // step B root->left me solve karna tha 
    
    root->left=  buildtreeInorderPostOrder(inorder,preorder,size,Preindex,inorderStart,pos-1);
    
    // step C root->left me solve karthea hai
    root->right=  buildtreeInorderPostOrder(inorder,preorder,size,Preindex,pos+1,inorderEnd);
    
    return root;

}


void LevelOrderTraversal(node *root){
        queue <node*>q;
        // initially
        q.push(root);
        q.push(NULL);

        
        while(!q.empty()){
            // A
         node* temp= q.front();
            // B
            q.pop();
            if(temp==NULL){
                cout<<endl;
                if(!q.empty()){
                        q.push(NULL); 
                }

            }
            else{
                // C
            cout<< temp->data<< " ";
            // D
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }


            }
            
        }

}

int main() {

    int inorder[]={10,20,50,10,60,30,70};
    int preorder[]={10,20,40,50,30,60,70};
    int size=7;
    int PreIndex=0;
    int inorderstart=0;
    int inorderEnd=size-1;


 node* root=buildtreeInorderPostOrder(inorder,preorder,size,PreIndex,inorderstart,inorderEnd);

    cout<< "Printing the tree : "<<endl;
    LevelOrderTraversal(root);
    
 return 0;
}