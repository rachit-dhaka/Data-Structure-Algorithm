#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class animal{
    protected   :
    int age;
    
};

class dog: private animal{
    public:
    void print(){
        cout<<this->age;

    }

};

int main() {
    dog d1;
    
    cout<< d1.age << endl;
    d1.print(); 



   
 return 0;
}


Multilevel 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class fruit{
    public:
    string name="rachit";



};

class mango:public fruit{
    public:
    int weight=10;

};

class alphanso:public mango{
    public:
    int sugarlevel=80;

    
};

int main() {

    alphanso a;
    cout<< a.name << " " << a.weight << " " << a.sugarlevel<<endl;

    
 return 0;
}

multiple

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
class a{
    public:
    int phy;

    
};
class b{
    public:
    int chemistry;


};

class c:public a, public b{
    public:
    int maths;


};



int main() {
    c obj;
    obj.phy;
    obj.chemistry;
    obj.maths;
    
 return 0;
}

hierachen inheritance 
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class car{
    public:
    int weight;
    int age;
     
    void speed(){
        cout<<"speeding up"<<endl;

    }


};

class scorpio:public car{


};
class fortuner:public car{

};



int main() {
    scorpio s11;
    s11.speed();

    fortuner f11;
    f11.speed();

    
 return 0;
}

ploymorphism - Fuction overloading 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class maths{
    public:

    int sum(int a, int b){
        return a+b;

    }

    int sum(int a , int b , int c){
        return a+b+c;

    }


};

int main() {

    maths obj;
    cout<< obj.sum(2,4) << endl;
    cout<< obj.sum(2,4,3) << endl;

    
    
 return 0;
}


 polymorphism - operator overloading 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class parameter{
    public:
    int val;

    void operator +(parameter& obj2){
        int value1= this->val;
        int value2= obj2.val;
        cout<< (value2-value1) << endl;

        
    }


};

int main() {
    parameter obj1, obj2;
    obj1.val=2;
    obj2.val=7;
    
    // this should print the difference between them 
    //  change the behaivour of "+" to minus 
    obj1 + obj2;
    
    
     

    
 return 0;      
}