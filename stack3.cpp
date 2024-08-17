// leetcode #1 Min stack #155  
// leetcode #2  Largest Valid Parantheses
// leetcode #3 Largest Rectangle in Histogram #84


// Next Smaller Element ->
#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

vector<int> nextsmallerElement(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for(int i=input.size()-1;i>=0;i--){
        int curr=input[i];

        while(s.top()>=curr){
            s.pop();
        }

        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int> &input){
     stack<int> s;
     s.push(-1);

    vector<int> ans(input.size());
    // left tot right prev smaller
    for(int i=0;i<input.size();i++){
        // initalzing curr element 
        int curr=input[i];

        // apka answer stack me 
        while(s.top()>=curr){
            s.pop();
        }

        // chota element mil gaya 
        ans[i]=s.top();
        // push kardo curr element ko 
        s.push(curr);


    }
    return ans;
}




int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    
    vector<int> ans= nextsmallerElement(v); 
    // priting answer 
    // nextsmallerElement
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    vector<int> ans2= prevSmallerElement(v); 
    // prev smaller elemnet 
    for(int i=0;i<v.size();i++){
        cout<<ans2[i]<<" ";
    }
    cout<<endl;

   
    
 return 0;
}