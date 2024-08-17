#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
bool checksorted(vector<int> &v , int& n,int i){
    // base case
    if(i==n-1){
        return true;

    }
    // 1 case solve karna 
    if(v[i+1]<v[i]){
        return false;
    }
    // baki recursion dek lega
    return checksorted(v,n,i+1);

    

}


int main() {
    vector<int>v{10,20,300,50,60};
    int n=v.size();
    int i=0;


    bool ans= checksorted(v,n,i);
    if(ans){
        cout<<"Array is sorted"<<endl;

    }
    else{
        cout<<"Array not sorted"<<endl;

    }



  
    return 0;
}

// binary search algorithm in recurssion
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int binarysearch(vector<int> &arr,int s,int e,int key){
    // base case
    // case 1
    if(s>e){
        return -1;

    }
    // case 2
    int mid=(s+e)/2;
    if(arr[mid]==key){
        return mid;
  }

    if(arr[mid]>key){
        return binarysearch(arr,s,mid-1,key);
    }
     
   else{
    return binarysearch(arr,mid+1,e,key);
   }

}
int main() {
    vector<int> arr{10,20,30,50,67,80};
    int target= 67   ;
    int n=arr.size();

    int s=0;
    int e=n-1;

    

    int ans=binarysearch(arr,s,e,target);
    cout<<ans<<endl;


  
    return 0;
}


sub squeces of a string 
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printSubSquences(string str,string output,int i,vector<string>& v){
    // base case 
    if(i>=str.length()){
        // cout<<output<<endl;
        v.push_back(output);

        
        return ;
    }

    // exclude 
    printSubSquences(str,output,i+1,v);

    // include
    output.push_back(str[i]);
    printSubSquences(str,output,i+1,v);



}
int main() {
    string str="abc";
    string output="";
    int i=0;
    vector<string>v;


    
    printSubSquences(str,output,i,v);

    cout<<"printting all sub squeces"<<endl;

    for(auto val:v){
        cout<<val<<" ";

    }
    cout<<endl;
    

    cout<<"size of string "<<v.size()<<endl;


  
    return 0;
}

