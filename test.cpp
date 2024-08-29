#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;
int main() {
    vector<int> temp{73,74,75};
    stack<int>st;
    int one=1;
    int zero=0;

    vector<int>ans;

    for(int i=0;i<temp.size();i++){
        int t=temp[i];
        int top=st.top();

        if(st.empty()){
            st.push(t);
        }

        else if (!st.empty() && t>top){
            ans.push_back(one);
            st.pop();
            st.push(t);
        }
        else{
            ans.push_back(zero);
        }

    }


    cout<<" Printing answer vecotr"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
 return 0;
}