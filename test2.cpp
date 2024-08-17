#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;
int main() {
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    cout<<"printing normal stack"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;

    stack<int> s;
    s.push(-1);

    vector<int> ans(v.size());

    for(int i=v.size()-1;i>=0;i--){
        int curr=v[i];

        while(s.top()>=curr){  
            s.pop();
        }

        ans[i]=s.top();
        s.push(i);
    }

    cout<<"printing smaller  stack"<<endl;

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;


 return 0;
}