// #include <bits/stdc++.h>
// using namespace std;

// int main() {
	
// 	int x;
// 	cin>>x;
// 	if(x>=60){
// 	    cout<<"Yes";
	    
// 	}
// 	else{
// 	    cout<<"No";
	    
// 	}

// }

#include <bits/stdc++.h>
using namespace std;

int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int a,b;
        cin>>a>>b;
        int rev_a=reverseDigits(a);
        int rev_b=reverseDigits(b);
        
        if(a>b|| rev_a>rev_b|| rev_a>b || a>rev_b ||rev_a>rev_b ) {
            cout<<"Yes"<<endl;
        }
        
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
    
}
