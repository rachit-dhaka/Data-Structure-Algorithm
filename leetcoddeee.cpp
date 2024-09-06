#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
#include<queue>
using namespace std;
int main() {
        string str="a1";
        string str2="c3";

        cout<<(int)str[0]<<endl;
        cout<<str[1]<<endl;

        int ans=((int)str[0]+str[1]);
        cout<<ans<<endl;

        cout<<(int)str2[0]<<endl;
        cout<<str2[1]<<endl;

        int ans2=((int)str2[0]+str2[1]);
        cout<<ans2<<endl;




        





 return 0;
}



// leeet code solution 

class Solution {
public:
    bool find( string coordinate){
        
        char character=coordinate[0];
        int element=coordinate[1];
        if((element%2==0) && (character%96==0)){
            return true;
        }
        else if((element%2!=0) && (character%96!=0)){
            return true;
        }
        else if ((element%2!=0) && (character%96==0)){
            return false;
        }
        else if((element%2==0) && (character%96!=0)){
            return false;
        }
        else{
            return true;
        }
        
        

    

    }

    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        bool coor1=find(coordinate1);
        bool coor2=find(coordinate2);

        if(coor1 == coor2){return true;}
        else {
            return false;
        } 


        
    }
};

