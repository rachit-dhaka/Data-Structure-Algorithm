#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;

int countRev (string s)
{
    int n=s.size();
    stack<char>st;
    
    if(n%2!=0){
        return -1;
        
    }
    else{
        for(int i=0;i<n;i++){
            char ch=s[i];
            
            if(ch=='{'){
                st.push(ch);
                
            }
            else{
                char top=st.top();
                if(top=='{' && ch=='}'){
                    st.pop();
                }
                
            }
        }
        return st.size();
    }
    
    
}

int main() {
    string s="}{{}}{{{";

    

    int ans=countRev(s);
    cout<<ans;



    
 return 0;
}