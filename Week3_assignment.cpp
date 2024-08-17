// #include<iostream>
// #include<vector>
// using namespace std;
// int main() { 

//     vector<int> arr{0, 1, 2, 0, 1, 2};
//     int start,mid,end;
//     start=mid=0;
//     end=arr.size()-1;

//     while(mid<=end){
//         if(arr[mid]==0){
//             swap(arr[mid],arr[start]);
//             mid++;
//             start++;


//         }
//         else if(arr[mid]==1){
//             mid++;
 
//         }

//         else{
//             swap(arr[mid],arr[end]);
//             end--;

//         }

//     }

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";

//     }


    


    
  
//     return 0;
// }


// question 2 , move all -ve 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {

//     vector<int> arr{1,2,-3,4,-5,6};
//     int i=0;


//     int start=0;
//     int end=arr.size()-1;

//     while(start<=end){
//         if(arr[i]<0){
//             swap(arr[i],arr[start]);
//             start++;
//             i++;


//         }
//         else{
//             swap(arr[i],arr[end]);
//             end--;

//         }

//     }

//     for(int i=0;i<arr.size();i++){
//          cout<<arr[i]<<" ";
//     }
  
//     return 0;
// }

// question 3 Find duplicate 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     vector<int> nums{1,3,4,2,2};

//     sort(nums.begin(),nums.end());



  
//     return 0;
// }

// wave priting a element 

#include<iostream>
#include<vector>
using namespace std;

void wavepriting(vector<vector<int> >v){
    int m=v.size();
    int n=v[0].size();

    for(int startcol=0;startcol<n;startcol++){
        // even colum -> top to bottom
        if((startcol & 1)==0){
            for(int i=0;i<m;i++){
            cout<<v[i][startcol]<<" ";
        }

        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";


            }
        }
        
    }
}
int main() {

    vector<vector<int> > v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    wavepriting(v);
    




  
    return 0;
}
