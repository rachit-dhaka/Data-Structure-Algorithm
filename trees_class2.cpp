a#include<iostream>
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




// class 4 codes

//build tree from inorder and preorder traversal
Node* buildTreeFromPreOrderInOrder(int inorder[], int preorder[], int size, int &preIndex, int inorderStart, int inorderEnd) {

        //base case
        if(preIndex >= size || inorderStart > inorderEnd) {
                return NULL;
        }

        //Step A:
        int element = preorder[preIndex++];
        Node* root = new Node(element);
        int pos = findPosition(inorder, size, element);

        //step B: root->left solve
        root->left = buildTreeFromPreOrderInOrder(inorder, preorder, size, preIndex, inorderStart, pos-1);
        //Step C: root->right solve
        root->right = buildTreeFromPreOrderInOrder(inorder, preorder, size, preIndex, pos+1, inorderEnd);

        return root;
}  

Node* buildTreeFromPostOrderandInOrder(int inorder[] , int postorder[] , int& postIndex , int size , int inorderStart , int inorderEnd){

    // base case
    if(postIndex < 0 || inorderStart > inorderEnd) return NULL;

    // A
    int element = postorder[postIndex];
    postIndex--;
    Node* root= new Node(element);

    int pos=findPosition(inorder,size,element);

    // root->right
    root->right=    buildTreeFromPostOrderandInOrder (inorder,postorder,postIndex,size,pos+1,inorderEnd);
    // root->left
    root->left= buildTreeFromPostOrderandInOrder(inorder    ,postorder,postIndex,size,inorderStart,pos-1);

    return root;

}

void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}

void createMapping(unordered_map<int,int> & mapping, int inorder[], int n) {
        for(int i=0; i<n; i++) {
                mapping[inorder[i]] = i;
        }
}