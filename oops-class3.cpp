#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

// runtime polymorphism 
class animal{
    public:

    virtual void speak(){
        cout<<"speaking"<<endl;

    }

};

class dog: public animal{
    public:
    // over ride 
    void speak(){
        cout<<"barking"<<endl;

    }


    

};

int main() {
    // animal a;
    // a.speak();

    // dog b;
    // b.speak();


    // upcasting  method 
    animal*a = new dog();
    a-> speak();

    // down casting 
    dog* b= new animal();
    b->speak();

    

    


    


     
 return 0;
}
