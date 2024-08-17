// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// using namespace std;
// int main() {

//     // creation 
//     stack<int> st;
//     // insertion
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);

//     // remove 
//     st.pop();

//     // check the element on the top
//     cout<< " top most element is : "<< st.top()<<endl;
//     // size of the stack 
//     cout<< " size of the element is : "<< st.size()<<endl;

//     if(st.empty()){
//         cout<<" lhali hai "<<endl;
//     }
//     else{
//         cout<< " khali nahi hai "<<endl;

//     }

//     while(!st.empty()){
//         cout<< st.top() << endl;
//         st.pop();

//     }
//     cout<<endl; 

    
//  return 0;
// }


// create our own tag 

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;

// class stack{
//     public: 
//     int *arr;
//     int top;
//     int size;

//     stack(int size){
//           arr= new int(size);
//           this->size=size;
//           top=-1;

//     }

//     // fuctions 
//     void push(int data){ 

//         if(size-top>1){
//             // space aaible hai 
//             top++;
//             arr[top]=data;
//         }
//         else{
//             cout<< " space nahi hai "<<endl;
//         }

//     }

//     void pop(){
//         if(top==-1){
//             cout<<" stack khali hai "<<endl;

//         }
//         else{
//             top=top-1;

//         }

//     }

//     int GetTop(){
//         if(top==-1){
//             cout<<" stack empty hai "<<endl;

//         }
//         else{
//             return arr[top];


//         }

//     }
//     //  return the no. of valid element in stack 
//     int GetSize(){
//         return top+1;
         

//     }

//     bool empty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;

//         }

//     }


// };
// int main() {

//     stack s(10);
//     // insertion
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     while(!s.empty()){
//         cout<<s.GetTop()<<" ";
//         s.pop();

//     }
//     cout<<endl;
     
//     cout<< " stack ka size is "<< s.GetSize()<<endl;


    



    
//  return 0;
// }



//  2 satck in 1 array
// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;

// class stack{
//     public:
//     int *arr;
//     int size;
//     int top1;
//     int top2;

//     stack(int size){
//         arr=new int[size];
//         this ->size=size;
//         top1=-1;
//         top2=size;

//     }

//     // fuctions 

//     void push1(int data){
//         if(top2-top1==1){
//             cout<< " Space not avaible "<<endl;
//         }
//         else{
//             top1++;
//             arr[top1]=data;

//         }
//  }


//  void push2(int data){
//     if(top2-top1==1){
//             cout<< " Space not avaible "<<endl;
//         }
//     else{
//         top2--;
//         arr[top2]=data;

//     }
//  }

//  void pop1(){
//     if(top1==-1){
//         cout<< " stack khali hai "<<endl;

//     }
//     else{
//         top1--;
//     }
//  }

//  void pop2(){
//     if(top1==-1){
//         cout<< " stack khali hai "<<endl;

//     }
//     else{
//         top2++;

//     }
    

//  }


//  void print(){
//     cout<<" top1 : "<<top1<<endl;
//     cout<<" top2 : "<<top2<<endl;
//     for(int i=0;i<size;i++){
//         cout<< arr[i]<<endl;
        
        

//     }cout<<endl;
// }

// };





// int main() {

//     stack s(10);
//      s.push1(10);
//      s.push1(20);
//      s.push1(30);
//      s.push1(40);
//      s.push1(50);
//      s.push2(10);
//      s.push2(20);
//      s.push2(30);
//      s.push2(40);


//      s.print();






    
//  return 0;
// }

//  adding dtring in stack 

// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// using namespace std;
// int main() {

//     string name="rachit";

//     stack<char>s;

//     // adding all the character of the string in the array;

//     for(int i=0;i<name.length();i++){
//         s.push(name[i]);

//     }


//     //  printing the stack;

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();


//     }
//     cout<<endl;


    
//  return 0;
// }



// find middle in a stack 
#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

void printMiddle(stack<int> &s, int &totalsize){

    //  base case
    if(s.size()==totalsize/2 +1){
        cout << " Middle Element is : "<< s.top() <<endl;
        return;
        

    }

    int temp=s.top();
    s.pop();

    // recursive call 

    printMiddle(s,totalsize);
    // backtrack kar lo

    s.push(temp);



}
int main() {
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);

    int totalsize=s.size();

    printMiddle(s , totalsize);

 return 0;
}