// #include<iostream>
// #include<vector>
// using namespace std;
// int main() { 
  
//   vector<int> arr{5,4,3,2,1};
//   int n= arr.size();



// //   Selection sort 

// for(int i=0; i<n-1; i++){

//     int minIndex=i;

//     for(int j=i+1; j<n ;j++){
//         if(arr[j]< arr[minIndex]){
//         // new minimum 
//         minIndex =j;

//         }
//     }
//     swap(arr[i],arr[minIndex]);


// }

// // priting 
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";

// }

//     return 0;
// }


// Buuble sort 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {

//     vector<int> arr{10,1,7,6,14,9};
//     int n= arr.size()-1;


//     // buuble sort algo 

//     for(int round=1;round <n;round ++){
//         for(int j=0;j<n-round;j++){
//             if(arr[j]>arr[j+1]){
//                 swap( arr[j], arr[j+1]);
                
//             }
//         }
//     }   

//     // printing 
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
        
//     }
  
//     return 0;


// }


#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr{10,1,7,6,14,9};
    int n=arr.size();

    // insert Sort
    for(int i =1;i<n;i++){

        // fetch 
        int val=arr[i];
        // compare
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>val){
                // shift
                arr[j+1]=arr[j];

            }
            else{
                break;


            }

        }
        // copy
        arr[j+1]=val;


        // printing 
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";

        }


    }

  
    return 0;
}
