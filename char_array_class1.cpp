// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {

//     char ch[100];
//     cout<<"Enter your name"<<endl;
//     cin>>ch;
    

//     cout<<"aap ka name "<<ch<<" hai"<<endl;



  
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;
// int main() {
//     char ch[100];
//     // cin>>ch;
//     cin.getline(ch,100);




//     cout<<ch;

  
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;

// int getlength(char name[]){
//     int length=0;
//     int i=0;
//     while(name[i]!= '\0'){
//         length++;
//         i++;

//     }
//     return length;

// }
// int main() {
//     char name[100];
//     cin>>name;

//     cout<<"lenght is "<< getlength(name)<<endl;

//     cout<<"by predefined function "<< strlen(name)<<endl;



    


  
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;

// void reverse(char name[]){
//     int length=strlen(name);
//     int i=0;
//     int j=length-1;

//     while(i<=j){
//         swap(name[i],name[j]);
//         i++;
//         j--;

//     }
    
// }
// int main() {
//     char name[100];
//     cin>>name;

//     cout<<"before Reverse :" << name<<endl;


//     // reverse it 
//     reverse(name);

//     cout<<"after reverese : "<< name <<endl;


    


    



  
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;

// void replace(char sentence[]){
//     int i=0;
//     int n=strlen(sentence);
//     for(int i=0;i<n;i++){
//         if(sentence[i] == ' '){
//             sentence[i] = '@';

//         }
//     }
// }
// int main() {
//     char sentence[100];
//     cin.getline(sentence,100);

//     replace(sentence);
//     cout<<"Priting sentence : "<< sentence<<endl;
    

    

    

    

  
//     return 0;
// }

// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;
// bool palindrome(char name[]){
//     int i=0;
//     int n=strlen(name);
//     int j=n-1;

//     while(i<=j){
//         if(name[i]!=name[j]){
//             return false;

           

//         }
//         else{
//             i++;
//             j--;


//         }
        
//     }
//     return true;

// }
// int main() {
//     char name[100];
//     cin>>name;

    
//     cout<<"Palindrome Check "<< palindrome(name)<<endl;
    



  
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;
// void convertintoUppercase(char arr[]){
//     int n=strlen(arr);
    
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i]-'a'+'A';

//     }

// }
// int main() {
//     char arr[100];
//     cin>>arr;

//     convertintoUppercase(arr);

//     cout<<arr;


  
//     return 0;
// }

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

// writing the compare function
bool comparestring(string a,string b){
    if(a.length()!=b.lenght()){
        return false;

    }
    else{
        int j=0;
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[j]){
                return false;

            }
            j++;

        }
    }
    return true;
    
}
int main() {
    // string created 
    string str;
     cin>>str;
    // getline(cin, str);

    

    cout<<str;
    cout<<"lenght : "<<str.length()<<endl;
    cout<<"is empty : " <<str.empty()<<endl;
    str.push_back('a');
    cout<<str;
    cout<<" Sub string : "<< str.substr(0,6)<<endl;


    string a="rachit";
    string b="rachit    ";

    cout<<"compare Fuction : "<<a.compare(b)<<endl;
    

    if(a.compare(b) == 0){
        cout<<" both are same string ";

    }
    else{
        cout<<"not same";

    }

    


  
    return 0;
}