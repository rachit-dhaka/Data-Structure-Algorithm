// first non repeating element 

// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// #include<queue>
// using namespace std;
// int main() {

//     string str="aabc";
//     int freq[26]={0};

//     queue<char>q;

//     string ans=" ";
//     for(int i=0;i<str.length();i++){
//         char ch=str[i];

//         //  frequency increment karo 
//         freq[ch-'a']++;
//         //elememt ko push karo 
//         q.push(ch);

//         while(!q.empty()){
//             if(freq[q.front()-'a']>1){
//                 q.pop();

//             }
//             else{
//                   ans.push_back(q.front());
//                   break;
//             }
//         }
//         if(q.empty()){
//         ans.push_back('#');

//     }  
        
//     }

    

//     cout<<"Final Answer is : "<<ans<<endl;

    
//  return 0;
// }


// Gas Station problem - Leetcode #134 - Question 2
// #include<iostream>
// #include<vector>
// #include<string.h>
// #include<stack>
// #include<queue>
// using namespace std;
// int main() {
    
//  return 0;
// }

// Sliding window maximum - 239 leetcode 

#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;
int main() {
    vector<int> nums{1,3,-1,-3,5,3,6,7};
    int k=3;

    deque<int>dq;
    vector<int>ans;

    // process the first k elements
    for(int i=0;i<k;i++){

        // removing the chota element 
        while(!dq.empty() && nums[i]>=nums[dq.front()]){
            dq.pop_back();
        }
        dq.push_back(i);

    }

    // store this answer 
    ans.push_back(nums[dq.front()]);

    // baki array ko process karo
    // step 1 : remove the out of winodw elements 
    for(int i=k;i<nums.size();i++){

        if(!dq.empty() &&  i-dq.front()>=k){
            dq.pop_front();
        }

        // step 2 : firse chote element ko nikal de 
         while(!dq.empty() && nums[i]>=nums[dq.front()]){
            dq.pop_back();
        }
        dq.push_back(i);

        //    current window ka store karna hia 
        ans.push_back(nums[dq.front()]);

    }


    // printing the answer vecotor 

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


 return 0;
}