#include<iostream>
#include<queue>
#include<vector>
#include<map>
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

// building A tree function
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




// Printing Top View 
void PrintingTopView (Node* root){

        if(root==NULL) return ;

        // creating a map to store the Horizontal Distance and Node 
        map<int,int> topNode;

        // Level order traversal 
        // we will store a pair consisting of node and horiontal distance 

        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
  
        while(!q.empty()){
                pair<Node* , int> temp=q.front();
                q.pop();

                Node* frontNode=temp.first;
                int hd= temp.second;

                // jo bhi horizontal distance aaya h that hd already exists
                //or not

                if(topNode.find(hd)==topNode.end()){
                  // create a entry 
                  topNode[hd]= frontNode->data;                  
                }

                if(frontNode->left){
                  q.push(make_pair(frontNode->left,hd-1));
                }
              
                if(frontNode->right){                  
                  q.push(make_pair(frontNode->right,hd+1));                
                }
                
                  
        }
  cout<<"printing the answer"<<endl;
  for(auto i: topNode){
    cout<<i.first<<"->"<<i.second<<endl;
  }  

}




// Printing Bottom View Tree
void PrintingBottomView (Node* root){

        if(root==NULL) return ;

        // creating a map to store the Horizontal Distance and Node 
        map<int,int> topNode;

        // Level order traversal 
        // we will store a pair consisting of node and horiontal distance 

        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));

        while(!q.empty()){
                pair<Node* , int> temp=q.front();
                q.pop();

                Node* frontNode=temp.first;
                int hd= temp.second;

                
                topNode[hd]= frontNode->data;                  
                

                if(frontNode->left){
                  q.push(make_pair(frontNode->left,hd-1));
                }

                if(frontNode->right){                  
                  q.push(make_pair(frontNode->right,hd+1));                
                }


        }
  cout<<"printing the answer"<<endl;
  for(auto i: topNode){
    cout<<i.first<<"->"<<i.second<<endl;
  }  

}


// printing Left View 
void PrintingLeftView(Node* root , vector<int> &ans , int level){
  // base case
  if(root==NULL) return ;

  if(level==ans.size()){
    ans.push_back(root->data);    
  }
  // left tree
  PrintingLeftView(root->left,ans,level+1);
  // right tree
  PrintingLeftView(root->right,ans,level+1);
  
}
// printing Right View 
void PrintingRightView(Node* root , vector<int> &ans , int level){
  // base case
  if(root==NULL) return ;

  if(level==ans.size()){
    ans.push_back(root->data);    
  }
  // right tree
    PrintingRightView(root->right,ans,level+1);
  // left tree
    PrintingRightView(root->left,ans,level+1);
  

}


// height of the tree
int Height(Node* root){
  if(root==NULL) return 0 ;

  int leftH=Height(root->left);
  int rightH=Height(root->right);
  int ans=max(leftH,rightH)+1;
  return ans;
}

// Traversal - InOrder 
void InOrder(Node* root){
  if(root==NULL) return;

  InOrder(root->left);
  cout<<root->data<<" ";
  InOrder(root->right);   
}

// Traversal - Pre Order
void PreOrder(Node* root){
  if(root==NULL) return ;

  cout<<root->data<<" ";
  PreOrder(root->left);
  PreOrder(root->right);
}

// Traversal - Post Order

void PostOrder(Node* root){
  if(root==NULL) return ;

  PostOrder(root->left);
  PostOrder(root->right);
  cout<<root->data<<" ";
}

// Traversal - Level Order Traversal 

void LevelOrderTraversal(Node* root){
  queue<Node*>q;
  // intially 
  q.push(root);

  while(!q.empty()){
    // A - Store it in a temp node
    Node* temp=q.front();
    // B
    q.pop();
    // C
    cout<<temp->data<<" ";
    // D
    if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
  }
}

// Left part
void LeftPart(Node* root){
  if(root==NULL) return ;

  queue<Node*>q;
  q.push(root);
  

  while(!q.empty()){
    Node* temp=q.front();
    q.pop();

    cout<<temp->data<<" ";

    if(temp->left != NULL){
      q.push(temp->left);
    }    
  }
}

// right part
void RightPart(Node* root){
  if(root==NULL) return ;
  

  queue<Node*>q;
  q.push(root);


  while(!q.empty()){
    Node* temp=q.front();
    q.pop();

    cout<<temp->data<<" ";
    

    if(temp->right != NULL){
      q.push(temp->right);
    }    
  }
}

// Right part in reverse
  void RightPartInReverse(Node* root,vector<int>&ans){
  
  //BC
  if(root==NULL) return ;
  // RC
  RightPartInReverse(root->right,ans);
  // BT  
  ans.push_back(root->data);
}


// Boundary Traversal 
void BoundaryTraversal(Node* root,vector<int>ans){
  if(root==NULL) return;

  // 1 - Left part 
  LeftPart(root);
  // 2 Leaf node
  // 3 Right part in reverse
  RightPartInReverse(root,ans);
}




int main(){
  Node* root=buildTree();
  // cout<<"InOrder"<<endl;InOrder(root); cout<<endl;
  // cout<<"PreOrder"<<endl;PreOrder(root);cout<<endl;
  // cout<<"PostOrder"<<endl;PostOrder(root);cout<<endl;
  // cout<<"Level Order"<<endl;LevelOrderTraversal(root);cout<<endl;
  // PrintingBottomView(root);cout<<endl;
  // PrintingTopView(root);cout<<endl;
  // cout<<"Printing right View"<<endl;
  // vector<int>ans;
  // int level=0;
  //   PrintingRightView(root,ans,level);
  // for(auto i :ans ){
  //   cout<<i<<" ";    
  // }

  // cout<<"Printing Left View"<<endl;
  
  // level=0;
  //   PrintingLeftView(root,ans,level);
  // for(auto i :ans ){
  //   cout<<i<<" ";    
  // }


  LeftPart(root);
  cout<<endl;
  vector<int>ans;
  RightPartInReverse(root,ans);
  cout<<"printing right part in reverse"<<endl;
  for(auto i:ans){
    cout<<i<<" ";
  }
  
  
  
  
  
  
  return 0;
}
