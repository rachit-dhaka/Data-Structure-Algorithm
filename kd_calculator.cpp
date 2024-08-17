#include<iostream>
#include<vector>
using namespace std;
int main() {
    double match,kd_target,current_kd,kills;
    int kills_behind, total_kills_required;



    cout<<"match Played : ";
    cin>>match;

    cout<<"Kills : ";
    cin>>kills;

    cout<<"Kd you want : ";
    cin>>kd_target;

    current_kd= kills/match ;
    cout<<"Current KD = "<<current_kd<<endl;

    kills_behind=(match*kd_target)-kills;
    cout<<"Kills behind : "<< kills_behind<<endl;

    int kills_next_match= kills_behind+ kd_target;
    cout<< "Kills next match " << kills_next_match<<endl;

    

    total_kills_required=kills_behind+kills+kd_target;
    cout<<"Total kills : "<<total_kills_required;
    



        










    


  
    return 0;
}

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;
// int main() {
//     int a ;
//     cin>>a;

//     if(a==3) cout<<"yes"<<endl;
    
//  return 0;
// }