 #include<iostream>
 #include<vector>
 #include<string.h>
 #include<stack>
 using namespace std;
 int main() {
     vector<int> v;
     v.push_back(8);
     v.push_back(4);
     v.push_back(6);
     v.push_back(2);
     v.push_back(3);

     cout<<"normal array"<<endl;

     for(int i=0;i<v.size();i++){
        cout<<v[i]<< " "<<endl;
     }


     for(int i=0;i<v.size();i++){
        if(v[i]>v[i+1]){
            v[i]=v[i]-v[i+1];
        }
        
     }
     
     cout<< " after logic"<<endl;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<< " "<<endl;
     }
  return 0;
 }