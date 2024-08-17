#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;
int main() {
    string s="abbaca";

    cout<<"printing string "<<endl;


    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;


    string ans;
    stack<char>st;

    for(int i=0;i<s.length();i++){
            char ch=s[i];

            char top=st.top();

            if(top!=ch){
                st.push(ch);

            }
            else if(top==ch){
                st.pop();
            }
            

        }

        cout<<"printing ans string "<<endl;

        for(int i=0;i<s.length();i++){
            ans[i]=st.top();
            st.pop();
        }
         cout<<endl;





 return 0;
}



