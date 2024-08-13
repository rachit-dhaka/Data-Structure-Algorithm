// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// #include<queue>
// using namespace std;

// void reverseQueue(queue<int>&q){
//     stack<int> st;
//     //  add all element of queue in a stack 
//     while(!q.empty()){
//         int element=q.front();
//         q.pop();

//         st.push(element);

//     }

//     // add all element from stack into queue
//     while(!st.empty()){
//         int element=st.top();
//         q.push(element);
//         st.pop();
//     }


// }

// void reverseQueueRecursion(queue<int> & q){
//     // BC
//     if(q.empty()){
//         return;

//     }

//     int temp=q.front();
//     q.pop();


//     // RC
//     reverseQueueRecursion(q);

//     // BT
//     q.push(temp);


    

// }


// int main() {

//     // #1 approch : push in stack and pop from stack 
//     // TC: o(n); 
//     // SC: 0(n);

//     // #2 using recursion 

//     queue<int> q;
    

//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(8);
//     q.push(2);

//     reverseQueueRecursion(q);

// //    printing queue
// cout<< "printing queue"<<endl; 

//     while(!q.empty()){
//         cout<< q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;


//  return 0;
// }


// Question 2 reverse k element in a queue;
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// #include<queue>
// using namespace std;

// void reverseK(queue<int>&q , int k){
//     // create a stack and push k element 
//     stack<int>st;
//     int count=0;
//     int n=q.size();


//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         st.push(temp);
//         count++;

//         if(count==k){
//             break;
//         }

//     }
//     // all the stack element in queue
//     while(!st.empty()){
//         int element=st.top();
//         q.push(element);
//         st.pop();

//     }

//     // step 3 push n-k element from queue from to back 
//     count=0;
//     while(!q.empty()){
//         int temp=q.front();
//         q.pop();
//         q.push(temp);
//         count++;

//         if(count==n-k){
//             break;
//         }
//     }


// }
// int main() {
//     queue<int>q;
//     q.push(3);
//     q.push(6);
//     q.push(9);
//     q.push(12);
//     q.push(15);
    

//     reverseK(q,4);

//     //    printing queue
// cout<< "printing queue"<<endl; 

//     while(!q.empty()){
//         cout<< q.front()<<" ";
//         q.pop();
//     }
//     cout<<endl;
//  return 0;
// }

// InterLeave first and second half of queue 
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// #include<queue>
// using namespace std;

// void InterLeave(queue<int>&q){
//     // step 1 create a new queue
//     queue<int>q2;

//     int n=q.size();
//     if(n==0){
//         return;
//     }
//     int mid=n/2;
//     int count=0;


//     while(!q.empty()){
//         int element=q.front();
//         q2.push(element);
//         q.pop();
//         count++;

//         if(count==mid){
//             break;
//         }
//     }
//     // step 2 interleave start kardo bhai 
//     while(!q.empty() && !q2.empty()){
        

//         int first=q2.front();
//         q2.pop();
//         q.push(first);

//         int second=q.front();
//         q.pop();
//         q.push(second);

//     }
//     // odd wala case
//     if(n&1){
//         int element=q.front();
//         q.pop();
//         q.push(element);
//             }




// }

// int main() {
//     queue<int> q;
//     int n=q.size();

    
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     q.push(80);

//     InterLeave(q); 

//          //    printing queue
//  cout<< "printing queue"<<endl; 

//      while(!q.empty()){
//          cout<< q.front()<<" ";
//          q.pop();
//      }
//      cout<<endl;    
        
//  return 0;
// }


// First -ve interger in every window of size K 
#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

void solve(int arr[],int n,int k){
    deque<int>q;

    // step 1 : Process first window 
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            q.push_back(i);
        }

    }

    // step 2 remaining window ko process karo 
    for(int i=k;i<n;i++){
        // answer of purani window  
        if(q.empty()){
            cout<<0<< " ";
        }
        else{
            cout<< arr[q.front()] << " ";

        }

        //  out of window elements ko remove kar do
        while((!q.empty())&&i-q.front()>=k){
            q.pop_front();

        }

        // check current element for insertion
        if(arr[i]<0){
            q.push_back(i);

        }

    }
     if(q.empty()){
        cout<<0<<" ";

     }
     else{
        cout<<arr[q.front()]<<" ";

     }
}
int main() {
    int arr[]={12,-2,-7,88,-15,30,16,28};
    int n=8;
    int k;
    solve(arr,n,k);

 return 0;
}