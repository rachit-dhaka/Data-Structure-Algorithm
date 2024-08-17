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
        s.push(ans[i]);
    }
    return ans;
}


int main() {

    vector<int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout<<"printing normal stack"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;


    vector<int> answer= nextsmallerElement(v);

    cout<<"printing next smaller element "<<endl;

    for(int i=0;i<answer.size();i++){
        if(answer[i]==-1){
            answer[i]=0;
            
        }
        
        cout<<answer[i]<<" ";

    }
    cout<<endl;


    
 return 0;
}