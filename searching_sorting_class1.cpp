#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

      while(start<=end){
        int element=arr[mid];

        if(element==target){
            return mid;

        }
        else if(element>target){
            end=mid-1;

        }
        else{
            end=mid+1;

        }
        mid=(start+end)/2;

      }
}


int main() {
    int arr[]={1,2,3,4,5,6,7};
    int target=2;
    int size=7;


    int indexoftarget=binarysearch(arr,size,target);

    if(indexoftarget==-1){
        cout<<"target not found"<<endl;

    }
    else{
        cout<<"target fount at   "<<indexoftarget<<endl;

    }


  
    return 0;
}



// Question 1 : finding the 1st occurence 

// #include<iostream>
// #include<vector>
// using namespace std;

// int firstOccurence(vector<int> v, int target){
//      int s=0;
//      int e=v.size()-1;
//      int mid=s+(e-s)/2;

//      int ans=-1;

//      while(s<=e){
//         if(v[mid]==target){
//             ans=mid;
//             e=mid-1;



//         }
//         else if(v[mid]>target){
//             e=mid-1;

            
//         }
//         else{
//             s=mid+1;



//         }
//         mid=s+(e-s)/2;

//      }
//      return ans;





      
// }

// int main() {

//     vector<int> v{1,2,2,2,3,4,4,4,4,9};
//     int target=4;
      

//     int ans=firstOccurence(v,target);

//     cout<< ans <<endl;



     

  
//     return 0;
// }    