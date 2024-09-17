#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;


// Creating a class for Tree
class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node* buildTree() {
	int data; 
	cout << "Enter the data: " << endl;
	cin >> data;

	if(data == -1) {
		return NULL;
	}
	//Step A , B and C
	Node* root = new Node(data);

	cout << "Enter data for left part of " << data << " node " << endl;
	root->left = buildTree();
	
	cout << "Enter data for right part of " << data << " node " << endl;
	root-> right = buildTree();

	return root;
	
}
// Traversal - In Order
void InOrder(Node* root){
	if(root==NULL) return ;

	InOrder(root->left);
	cout<< root->data << " ";
	InOrder(root->right);
}


// Traversal - PreOrder
void PreOrder(Node* root){
	if(root==NULL) return ;

	cout<<root->data<<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}

// Traversal - PostOrder
void PostOrder(Node* root){
	if(root==NULL) return ;

	PostOrder(root->left);
	PostOrder(root->right);
	cout<< root->data << " ";
}

// Traversal Level Order
void LevelOrder(Node* root){
	queue<Node*>q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		Node* temp=q.front();
		q.pop();
		
	if(temp==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);
		}
	}
	else{
		cout<<temp->data<<" ";
		if(temp->left != NULL){
			q.push(temp->left);
		}
		if(temp->right){
			q.push(temp->right);
		}
	}
	}	
}

void TopView(Node* root){
	if(root==NULL) return ;

	queue<Node*>q;
	


}

int main() {
	Node* root=buildTree();
	InOrder(root); cout<<endl;
	PreOrder(root); cout<<endl;
	PostOrder(root); cout<<endl;
	LevelOrder(root); cout<<endl;

    
 return 0;
}