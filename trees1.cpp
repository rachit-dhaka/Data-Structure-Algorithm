#include <iostream>
using namespace std;

int main() {
  int a =28;
  int b=100;
  int charlie=0;



  while(a!=b){
     
    int roundoff=0;

    if(a>b){
      int q=a%2;
        if(q!=0){
            roundoff=(a/2)+1;
        }
        else{
          roundoff=a/2;
        }
        
    charlie=charlie+roundoff;
    a = a-roundoff;

    cout<<"value of a  :"<<a<<endl;
    cout<<"value of charlie :"<<a<<endl;

    }
    else{
      int q=b%2;
        if(q>0){
            roundoff=(b/2)+1;
        }
        else{
          roundoff=b/2;
        }
        
    charlie=charlie+roundoff;
    b=b-roundoff;
        

    cout<<"value of b  :"<<b<<endl;
    cout<<"value of charlie :"<<a<<endl;

    }  


    
  }
  cout<<"Charlie bhai ka value : "<<charlie<<endl;


  // cout<<charlie<<endl;
  return 0;
}
