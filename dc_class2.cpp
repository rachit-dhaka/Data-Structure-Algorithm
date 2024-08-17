// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;

// int partition(int arr[], int s, int e){
//     // step1 
//     int pivotElement=arr[s];
//     int pivotIndex=s;

//     // step2- find pivot element and usko sahi jagah rako
//     int count=0;

//     for(int i=s+1;i<=e;i++){ 
//         if(arr[i]<=pivotElement){
//             count++;

//         }
//     }
//     int rightIndex=s+count;
//     swap(arr[pivotIndex],arr[rightIndex]);
//     pivotIndex=rightIndex;

    

//     // step3 left me chote and right me bade
//     int i=s;
//     int j=e;

//     while(i<pivotIndex  && j>pivotIndex){
//         while(arr[i]<=pivotElement){
//             i++;

//         }
//         while(arr[j]>pivotElement){
//             j--;

//         }

//         // 2 case ban sakthe hai 
//         // case1= you found the element to swap
//         // case2= no need to swap

//         if(i<pivotIndex  && j>pivotIndex){
//             swap(arr[i],arr[j]);

//         }
//         return pivotIndex;


//     }

    
     

// }

// void quicksort(int arr[],int s, int e){
//     // base case
//     if(s>=e)
//     return ;

//     // partition logic

//     int p= partition(arr,s,e);



//     // recursove logic
//     // left
//     quicksort(arr,s,p-1);

//     // right
//     quicksort(arr,p+1,e);

// }
// int main() {
//     int arr[]={5,6,9,1,4,23,56};
//     int n=7;
//     int s=0;
//     int e=n-1;

//     quicksort(arr,s,e);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
     

  
//     return 0;
// }



// BACKTRACKING 
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printpermutation(string &str, int i){
    // base case
    if(i>=str.length()){
        cout<<str<<" ";
        return;

    }

    for(int j=i;j<str.length();j++){
        // swap karna
        swap(str[i],str[j]);
        // recursive call
        printpermutation(str,i+1);
        //  backtracking 
        swap(str[i],str[j]);


    }
}
int main() {
    
    string str="abc";
    int i=0;

    printpermutation(str,i);

  
    return 0;
}