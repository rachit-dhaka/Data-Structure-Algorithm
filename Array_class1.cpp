// #include<iostream>
// #include<vector>
// using namespace std;

// bool find(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;

//         }
//         return false;

        

        
//     }
// }


// int main() {
//     int arr[]={11,12,13,14,15};
//     int size=5;
//     int key;

//      cout<<"Enter the value to find the key"<<endl;
//      cin>>key;

//      if(find(arr, size,key)){
//         cout<<"Found"<<endl;

//      }
//      else{
//         cout<<"Not ganta Found"<<endl;

//      }




    
  
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[]={1,0,1,1,1,0,0,0,1,0};
//     int size=10;
     
//     int numzero=0;
//     int numone=0;


//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             numzero++;

//         }
//         if(arr[i]==1){
//             numone++;

//         }

        


//     }

//     cout<<numzero<<endl;
//     cout<<numone<<endl;

  
//     return 0;
// }





// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;


// int main() {

//     int arr[]={2,5,6,3,7,9,8,4,13,45,56,86};

//     int maxi=INT_MIN;
//     int mini=INT_MAX;
//     int size=12;

//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];

//         }
//     }

//     cout<<"maximum value"<<maxi;
     



  
//     return 0;
// }



// extreme printing 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int size=9;
//     int start=0;
//     int end=size-1;



//     while(true){
//         if(start>end)
//             break;

//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//             start++;
//             end--;



        
        
    
//     }
//     return 0;
// }




#include<iostream>
#include<vector>
using namespace std;
int main() {
    int arr[]={10,20,30,40,50};
    int size=5;
    int start=0;
    int end=size-1; 

    


    while(start<=end ){
        
            swap(arr[start],arr[end]);
            start++;
            end++;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"helllo";
    
     return 0;
}