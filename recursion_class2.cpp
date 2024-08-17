climb stair problem
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int climbstair(int n){
    // base case
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;

    }

    int ans=climbstair(n-1)+climbstair(n-2);
    return ans;
     
}
int main() {
    int n;
    cin>>n;
    int ans=climbstair(n);
    cout<<ans;

  
    return 0;
}

print the array using recursion 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void print(int arr[],int n,int i){
    // base case
    if(i>=n){
        return ;
    }
    // ek case solve kar diya 
    cout<<arr[i]<<" ";

    // baki recursion sambhal lega 
    print(arr,n,i);

}
int main() {
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;

     print(arr,n,i);

    return 0;
}


find maximum in the array
#include<iostream>
#include<vector>
#include<string.h>
#include<limits.h>
using namespace std;
void maximum(int arr[],int n,int i,int& maxi){
    // base case
    if(i>=n)
        return;
        
    // ek case solve kar diya 
    if(maxi<arr[i]){
        maxi=arr[i];

    }
    // baki recursion sambhal lega
    
    maximum(arr,n,i+1,maxi);

    

}
int main() {
    
    int arr[]={10,30,15,21,44,26,1,64,647,2526,6737,7};
    int n=12;
    int i=0;
    int maxi=INT_MIN;   

    
    maximum(arr,n,i,maxi);

    cout<<maxi<<endl;


    return 0;
}

find minimum in the array

#include<iostream>
#include<vector>
#include<string.h>
#include<limits.h>
using namespace std;
void minimum(int arr[],int n,int i,int& mini){
    if(i>=n){
        return;

    }

    // ek case solve kar 
    if(arr[i]< mini){
        mini=arr[i];
    }
    // ab recursio  tu dek le
    minimum(arr,n,i+1,mini);

}
int main() {
    int arr[]={10,30,15,21,44,26,1,64,647,2526,6737,7};
    int n=12;
    int i=0;

    int mini=INT_MAX;

    minimum(arr,n,i,mini);
    cout<<mini<<endl;

  
    return 0;
}


find the key in string 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void  findkey(string name,char key,int n,int i,vector<int>& ans){
    // base case
    if(i>=n){
        return;

    }

    // ek case solve karlo
    if(name[i]==key){
        ans.push_back(i);

    
    }
    // baki recursion dek lega
    return findkey(name,key,n,i+1,ans);
  
}
int main() {
    string name="raccchiitt";
    int n=name.length();
    char key='i';
    int i=0;
    vector<int>ans;

    findkey(name,key,n,i,ans);

    
   cout<<"priting array "<<endl;
   for(auto val: ans){
    cout<<val<<" ";

   }
   cout<<endl;
  
    return 0;
}

 print the invidual number 
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printdigits(int n){
    // base case 
    if(n==0){
        return ;

    }
    // ek case me solve karunga 
    int digit=n%10;
    cout<<digit<<endl;
    int newvalue=n/10;
    // baki recurssion sambhal lega
    printdigits(newvalue);
    


}
int main() {

    int n=647;

    printdigits(n);


  
    return 0;
}

