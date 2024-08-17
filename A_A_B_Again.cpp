#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int number;
        cin>>number;

        int first=number/10;
        int second=number%10;

        int ans=first+second;
        cout<<ans<<endl;

    }
    

 return 0;
}