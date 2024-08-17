// INsert at bottom
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// using namespace std;



// void InsertAtBottom(stack<int> &s, int target){
    

//     if(s.empty()){
//         s.push(target);
//         return;

//     }

//     int topElement=s.top();
//     s.pop();

//     // recursive call 
//     InsertAtBottom(s,target);
//     // backtrack
//     s.push(topElement);

    
    

// }
// int main() {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);
//     s.push(100);

//     int target=s.top();
//     s.pop();
//     InsertAtBottom(s,target);


//     while(!s.empty()){
//         cout<< s.top() << " "<<endl;
//         s.pop();
         
//     }

//  return 0;
// }


// reverse a stack
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// using namespace std;


// void InsertAtBottom(stack<int> &s, int target){
    
//     if(s.empty()){
//         s.push(target);
//         return;
//     }

//     int topElement=s.top();
//     s.pop();
//     // recursive call 
//     InsertAtBottom(s,target);
//     // backtrack
//     s.push(topElement);

// }

// void reverseStack(stack<int> &s){
//     // base case
//     if(s.empty()){
        
//         return;

//     }
    
//     int target=s.top();
//     s.pop();

//     // recursive
//     reverseStack(s);
//     // target ko insert at bottom 

//     InsertAtBottom(s,target);

// }

// int main() {
//     stack<int>s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

    



//     reverseStack(s);




//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();

//     }


//  return 0;
// }


#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int target){
        // base case
        if(s.empty()){   
            s.push(target);
            return;
        }
        if(target<=s.top()){
            s.push(target);
            return ;
        }


        int topElement=s.top();
        s.pop();

        // RC
        insertSorted(s,target);
        // BT
        s.push(topElement);
}

void SortStack(stack<int> &s){
    // base case
    if(s.empty()){
        return;
    }

    // normal function
    int topElement=s.top();
    s.pop();

    // RC
    SortStack(s);
    // BT
    insertSorted(s,topElement); 
     
}
int main() {

    stack<int>s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    SortStack(s);
    cout<<"printing stack"<<endl;

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    

    
 return 0;
}