// binary search in nearly sorteed array 

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarysearch(vector<int>arr,int target){
//     int s,e,mid;
//     s=0;
//     e=arr.size()-1;
//     mid=s+(e-s)/2;

//     while(s<e){
//         if(arr[mid]==target){
//         return mid;

//     }
//     if(mid-1>=0 && arr[mid-1]==target){
//         return mid-1;

//     }
//     if(mid+1 < arr.size() && arr[mid+1]==target){
//         return mid+1;

//     }

//     if(arr[mid]<target){
//         // right me search 
//         s=mid+2;

//     }
//     else{
//         // left me search karo 
//         e=mid-1;

//     }
//     mid=s+(e-s)/2;

//     }
//     return -1;


    
    
    
// }
// int main() {
//     vector<int> arr{10,3,40,20,50,80,70};
//     int target=10;

//     int ans=binarysearch(arr,target);
//     cout<<"Indes of target :"<<ans<<endl;
//     cout<<"maje karle BC!";




  
//     return 0;
// }

// divide 2 no. using binary search 

#include<iostream>
#include<vector>
using namespace std;

int solve(int divident , int divisor ){
    int s=0;
    int e=divident;
    int ans=0;


    int mid=s+(e-s)/2;
    
    while(s<=e){
        if(mid*divisor==divident){
            return mid;

        }
        if(mid*divisor>divident){
            // left me search karo 
            e=mid=1;

        }
        else {
            // ans store
            // right search 
            ans=mid;


            s=mid+1;
            
        }
        mid=s+(e-s)/2;

    }
    return ans ;

     
}
int main() {
    int divident=22;
    int divisor=7;
    
    int ans=solve(divident,divisor);
    cout<<"ans : "<<ans<<endl;


  
    return 0;
}

// find the odd occuring element 

     
