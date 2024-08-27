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


void LevelOrderTraversal(Node *root){
        queue<Node*>q;
        // initially
        q.push(root);
        q.push(NULL);

        
        while(!q.empty()){
            // A
            Node* temp= q.front();
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



void InorderTraversal(Node*root){
    // base case
    if(root==NULL){
        return;
    }
    // LNR - L
    InorderTraversal(root->left);
    cout<<root->data<<" ";


    InorderTraversal(root->right);
    

}


void PreorderTraversal(Node*root){
    // base case
    if(root==NULL){
        return;
    }
    // NLR
    cout<<root->data<<" ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
    

}

void PostorderTraversal(Node*root){
    // base case
    if(root==NULL){
        return;
    }
    // LRN
    
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
    cout<<root->data<<" ";
    

}



int height(Node*root){
    if(root==NULL){
        return 0;

    }

    int leftH=height(root->left);
    int rightH=height(root->right);
    int ans=max(leftH,rightH)+1;
    return ans;

}





int main() {


    Node* root =NULL;
    root=buildTree();
    cout<<"Printing Level order traversal : "<<endl;
    LevelOrderTraversal(root);
    cout<<endl;

    cout<< " Printing Inorder traversal : "<<endl;
    InorderTraversal(root);
        cout<<endl;


    cout<< " Printing Pre  Order traversal : "<<endl;
    PreorderTraversal(root);
        cout<<endl;



    cout<< " Printing psot  Order traversal : "<<endl;
    PostorderTraversal(root);
        cout<<endl;

    cout<<"height of the tree : "<<endl;
    cout<<height(root)<<endl;
    cout<<endl;



    
 return 0;
}