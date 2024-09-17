#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

class Node{
        public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
                this->data = data;
                this->left = NULL;     
                this->right = NULL;  
        }
};

int findPosition(int arr[], int n, int element) {
        for(int i=0; i<n; i++) {
                if(arr[i] == element) {
                        return i;
                }
        }
        return -1;
}


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



void printLeftBoundary(Node* root){
        // base case
        if(root==NULL) return;
        if(root->left ==NULL && root->right == NULL) return ;

        cout<<root->data<<" ";
        if(root->left !=NULL){
                printLeftBoundary(root->left);
        }
        else{
               printLeftBoundary(root->right); 
        }    
}

void LeafBoundary(Node* root){
        if(root==NULL) return ;
        if(root->left ==NULL && root->right == NULL)
                cout<<root->data<<" ";
        
        LeafBoundary(root->left);
        LeafBoundary(root->right);

}

void printRightBoundary(Node* root){
        // Base case
        if(root==NULL) return;
        if(root->left ==NULL && root->right == NULL){
                return;
        }

        // RC
        if(root->right !=NULL){
                printRightBoundary(root->right);
        }
        else{
                printRightBoundary(root->left);
        }

        // BT
        cout<<root->data<<" ";



}

void BoundaryTraversal(Node* root){
        if(root==NULL) return ;
        
        cout<<root->data<<" ";
        // left part
        printLeftBoundary(root->left);
        // Print Lead nodes
        LeafBoundary(root);
        // right side in reverse 
        printRightBoundary(root->right);
}



int main() {
        

        // INORDER AND PREORDER PRINT 

        // int inorder[] = {40,20,50,10,60,30,70};
        // int preorder[] = {10,20,40,50,30,60,70};
        // int size = 7;
        // int preIndex = 0;
        // int inorderStart = 0;
        // int inorderEnd = size-1;

        // cout << "Building Tree: " << endl;
        // Node* root = buildTreeFromPreOrderInOrder(inorder, preorder,size, preIndex, inorderStart, inorderEnd );

        // cout<< endl << "Printing level order traversal " << endl;
        // levelOrderTraversal(root);


        // INORDER AND POSTORDER PRINTING 

        // int inorder[] = {40,20,10,50,30,60};
        // int postorder[] = {40,20,50,60,30,10};
        // int size = 6;
        // int postIndex = size-1;
        // int inorderStart = 0;
        // int inorderEnd = size-1;

        // unordered_map<int,int> mapping;

        // createMapping(mapping, inorder, size);

        // cout<<" Building tree "<<endl;
        // Node*root = buildTreeFromPostOrderandInOrder(inorder,  postorder ,postIndex,size,inorderStart,inorderEnd );

        // cout << "Printing the tree " << endl;
        // levelOrderTraversal(root);

        Node* root=buildTree();
        BoundaryTraversal(root);
        
        



  
  return 0;
}
