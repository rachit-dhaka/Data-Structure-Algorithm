#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int factorial(int n){
    if(n==1)
        return 1;

    int ans=n*factorial(n-1);
    return ans;

}
int main() {
    int n;
    cin>>n;

    int ans=factorial(n);

    cout<<ans<<endl;


     
  
    return 0;
}

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void counting(int n){
    // base case
    if(n==0){
        return;

    }

    // processing 
    cout<<n<<endl;

    // recursive relation
    counting(n-1);

    

}

int main() {

    int n;
    cin>>n;
    counting(n);

  
    return 0;
}

febonic series using recursion 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int fib(int n){
    // base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    // recursive algo
    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main() {

    int n;
    cin>>n;
    int ans=fib(n);

    cout<<ans<<endl;
    return 0;
}

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main() {
  
    return 0;
}