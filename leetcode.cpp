#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;


void reverseStack(stack<char> &st){
    if (st.empty()) 
        return;
     
 
    int x = st.top();
    st.pop();

    reverseStack(st);
    cout << x << " ";
     st.push(x);


}
int main() {
    string s="leEeetcode";
    stack<char>st;

    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if(islower(ch)){
            

            st.push(ch);

        }
        else {
            
            char newCh=tolower(ch);
            if(st.top()==newCh){
                st.pop();

            }
            else{
                st.push(ch);

            }


        }
        

        
    }

    // printing stack

    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

   


 return 0;
}