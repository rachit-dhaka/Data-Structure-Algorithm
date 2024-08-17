// merge 2 sorted array
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
// 
void merge(int* arr, int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;


// assume to create a arrays of len1 ,adn len2 lenght 
    int* leftArr= new int[len1];
    int* rightArr= new int[len2];

// copy karo for left part of the array to left array 
    int k=s;
    for(int i=0;i<len1;i++){
        leftArr[i]=arr[k];
        k++;

    }
    k=mid+1;
    
// copy karo for right part of the array to right  array 
    for(int i=0;i<len2;i++){
        rightArr[i]=arr[k];
        k++;

    }

// merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;


    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
            

        }
        else{
            arr[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
             
        }
    } 

    // copy logic for left array 
    while(leftIndex<len1){
        arr[mainArrayIndex++]=left[leftIndex++];

    }
    // copy logic for right array
    while(rightIndex<len2){
        arr[mainArrayIndex++]=right[rightIndex++];
    }





}
// breaking the array into single element
int mergesort(int* arr,int s,int e){
    // base case
    // if s==e or s>e 
    if(s>=e){
        return ;
    }
    int mid=(s+e)/2;

    // left part sort kardo 
    mergesort(arr,s,mid);

    // right part sort kardo
    mergesort(arr,mid+1,e);


    // now merge 2 sorted array
    merge(arr,s,e);


}
int main() {
    int arr[]={4,5,13,2,12};
    int n=5;

    int s=0;
    int e=n-1;
     

    mergesort(arr,s,e);

    for(int i=0;in;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    return 0;
}   