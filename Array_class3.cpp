#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


bool findkey(int brr[][4],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(brr[i][j]==key){
                return true;

                
            }
            
        }
    }

    return false;

}

int getmax(int brr[][4],int row,int col){
    int maxi=INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(maxi<brr[i][j]){
                maxi=brr[i][j];

            }
        }
    }
    return maxi;

}



int main() {

    // int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    
    // }

    // cout<<endl;


    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    
    // }


    // row wise and colum wise sum 

    // int brr[4][4]={{1,2,4,3},{1,4,6,9},{5,2,2,5},{2,1,3,10}};

    // for(int i=0;i<4;i++){
    //     int sum=0;
    //     for(int j=0;j<4;j++){
    //         sum=sum+brr[j][i];



    //     }
    //     cout<<sum<<" ";


    // }

    // int brr[4][4]={{1,2,4,3},{1,4,6,9},{5,2,2,5},{2,1,3,10}};
    // int row=4;
    // int col=4;


// finding the element 
    // int key;
    // cin>>key;

    // int finding=findkey(brr,row, col,key);

    // cout<<finding;

// finding the higest value

    // int maximun=getmax(brr,row,col);

    // cout<<maximun;

    // int brr[3][3]={{2,1,6},{1,3,5},{9,11,13}};
    // int brr[3][3];

    // int row=3;
    // int col=3;

    // before swaping 

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<brr[i][j];

    //     }
    //     cout<<endl;
    // }
    

    // cout<<endl<<endl;

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         swap(brr[i][j],brr[j][i]);

    //     }
    // }

    // // after swaping 

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<brr[i][j];

    //     }
    //     cout<<endl;
    // }

// vector 2 d array : easy method 

    //  vector<vector<int> > brr;


    //  vector<int> a{1,2,3};
    //  vector<int> b{4,5,6};
    //  vector<int> c{7,8,9};

    //  brr.push_back(a);
    //  brr.push_back(b);
    //  brr.push_back(c);


    // for(int i=0;i<brr.size();i++){
    //     for(int j=0;j<brr[i].size();j++){
    //         cout<<brr[i][j]<<" ";

    //     }
    //     cout<<endl;

    // } 

// vector 2d array hard method
    
    vector<vector<int> > brr(5 ,vector<int>(5 , -8));

    //  for(int i=0;i<brr.size();i++){
    //      for(int j=0;j<brr[i].size();j++){
    //          cout<<brr[i][j]<<" ";

    //      }
    //      cout<<endl;

    //  }

    cout<<brr[2][3];
    



    
    









      


    


     



     




    


  
    return 0;
}