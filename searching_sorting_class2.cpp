// #include<iostream>
// #include<vector>
// using namespace std;

// int findpivot(vector<int> arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=(s+e)/2;

//     while(s<=e){
//         if(mid+1 < arr.size() && arr[mid]>arr[mid+1]){
//             return mid;

//         }
//         if(mid-1>=0 && arr[mid-1]>arr[mid]){
//             return mid-1;

//         }
//         if(arr[s]>=arr[mid]){
//             e=mid-1;

//         }
//         else{
//             s=mid+1;

//         }
//         mid=(s+e)/2;

//     }
//     return -1;

     
// }
// int main() {

//     vector<int> arr{3,4,5,6,7,1,2};
//     int ans=findpivot(arr);

//     cout<<"pivot element is "<<ans;

   

  
//     return 0;
// }

// square root of number using binart search 

// #include<iostream>
// #include<vector>
// using namespace std;

// int findsqrt(int n){
//     int target=n;
//     int s=0;
//     int e=n;
//     int mid=s+(e-s)/2;
//     int ans=-1;

     

//     while(s<=e){
//         if(mid*mid==target){
//             return mid;

//         }
//         if(mid*mid>target){
            

//             // lest search 
//             e=mid-1;

//         }
//         else{
//             ans=mid;

//             // right search 
//             s=mid+1;

//         }
//         mid=s+(e-s)/2;
        

//     }
//     return ans;


    
// }
// int main() {
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;

//     int ans=findsqrt(n);
//     cout<<"ans is "<<ans<<endl;



  
//     return 0;
// }

// binary search in 2d array 
#include<iostream>
#include<vector>
using namespace std;
bool binarysearch(int arr[][4], int row, int col, int target){
    int s=0;
    int e= row*col - 1;
    int mid=s+(e-s)/2;

    while(s<=e){
        int rowindex =mid/col;
        int colindex =mid%col;
        
        if(arr[rowindex][colindex]==target){
            return true;

        }
        else if(arr[rowindex][colindex]<target){
            s=mid+1;
 

        }
        else{
            e=mid-1;

        }

        mid=s+(e-s)/2;

         
    }
    return false;



}


int main() {
    int arr[5][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int row=5;
    int col=4;
    int target=19;

    bool ans=binarysearch(arr,row,col,target);

    if(ans){
        cout<<"found";

    }
    else{
        cout<<"not found";

    }





  
    return 0;
}