// #include<iostream>
// #include<vector>
// using namespace std;

// int findunique(vector<int>arr){
//     int ans=0;

//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin>>n;


//     vector<int>arr(n);

//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
    
//     int uniqueElement=findunique(arr);

//     cout<<"unique element "<<uniqueElement<<endl;




    
    



  
//     return 0;
// }



// union of 2 array 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int arr[]={1,3,5,7,9};
//     int brr[]={2,4,6,8,10};
//     int sizearr=5;
//     int sizebrr=5;

//     vector<int>ans;

//     for(int i=0;i<sizearr;i++){
//         ans.push_back(arr[i]);

//     }

//     for(int j=0;j<sizebrr;j++){
//         ans.push_back(brr[j]);

//     }

//     for(int a=0;a<ans.size();a++){
//         cout<<ans[a]<<" ";
    
//     }






//     return 0;
// }


// intersection of 2 array 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() { 
//     int arr[]={1,2,3,4,5,6};
//     int brr[]={2,3,5,7,9};

//     int sizearr=6;
//     int sizebrr=5;

//     vector<int>ans;

//     for(int i=0;i<sizearr;i++){
//         for(int j=0;j<sizebrr;j++){
//             if(arr[i]==brr[j]){
//                 ans.push_back(arr[i]);

                
//             }
            
//         }
//     }

//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";

//     }
//     return 0;
// }


// sort 0's and 1's

#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>arr{0,1,0,1,1,1,0,1};


    int start=0;
    int end=arr.size()-1;

    int i=0;
    




    while(i != end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            i++;
            start++;


        }
        if(arr[i]==1){
            swap(arr[i],arr[end]);
            
            end--;


        }

       
        

    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
  
    return 0;
}

