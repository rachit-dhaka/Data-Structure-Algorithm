#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<limits.h>
using namespace std;


vector<int> nextsmallerElement(vector<int> &input){
    stack<int> s;
    s.push(-1);

    vector<int> ans(input.size());

    for(int i=input.size()-1;i>=0;i--){
        int curr=input[i];

        while(s.top()!= -1 &&input[s.top()]>=curr){  
            s.pop();
        }

        ans[i]=s.top();
        s.push(i);
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
        while( s.top()!= -1 && input[s.top()] >=curr){
            s.pop();
        }

        // chota element mil gaya 
        ans[i]=s.top();
        // push kardo curr element ko 
        s.push(i);


    }
    return ans;
}


int GetRectangularAreaHistogram(vector<int> &height){
    // step 1 : prev smalller output 

    vector<int> prev=prevSmallerElement(height);
    // step 2 : next smaller output
    vector<int> next=nextsmallerElement(height);

    int maxArea=INT_MIN;

    int size=height.size();
    for(int i=0;i<height.size();i++){
        int lenght=height[i];
        if(next[i]==-1){
            next[i]=size;
        }
        int width=next[i]-prev[i]-1;

        int area=lenght*width;
        maxArea=max(maxArea,area);

    }
    return maxArea;


}


int main() {

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);


    cout<<" answer hai : "<< GetRectangularAreaHistogram(v)<<endl;

    cout<<" iska maa k"
    
    
 return 0;
}