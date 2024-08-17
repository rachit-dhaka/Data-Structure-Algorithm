#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class animal{
    private:
    int weight=101;


    public:
    // state the properties
    int age;
    string name;

    //  Default construtor  (is called by default) 
    animal(){
    }

    // parameterised constructor 
    animal(int age){
        this->age=age;
        cout<<"parametrised constructor"<<endl;

    }

    animal(int age , int weight){
        this->age=age;
        this-> weight=weight;

        cout<<"parametrised constructor -2"<<endl;

    }

    animal(int age , int weight , string name){
        this->age=age;
        this-> weight=weight;
        this -> name=name;


        cout<<"parametrised constructor -3"<<endl;

    }

    // copy constructor 
    animal(animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"copy constructor"<<endl;


    }
    
    

    // behaviour 
    void eat(){
        cout<<"eating"<<endl;


    }
    void sleep(){
        cout<<"sleeping"<<endl;


    }

    // to access private properties we use setter and getter
    int getweight(){
        return weight;

    }
    int setweight(int w){
        weight=w;

    }

    
    string p="bolna";
    int setpassword(string password){
        if(password==p){
            cout<< weight <<endl;
        }
        else{
            cout<<"Wrong Password"<<endl;

        }
    }

    ~animal(){
        cout<< "I am inside desructor"<<endl;

    }
};

int main() {
    // objet creation 

    // static memory
    // animal ramesh;
    

    // ramesh.name="Sher";
    // ramesh.age=12;

    // cout<<"age of ramesh :"<<ramesh.age<<endl;
    // cout<<"name of ramesh :"<<ramesh.name<<endl;
    
    // ramesh.eat();
    // ramesh.sleep();

    // ramesh.setweight(69);
    // cout<<ramesh.getweight()<<endl;

    // string passowrd;
    // cout<<"enter the password"<<endl;
    // cin>>passowrd;

    // ramesh.setpassword(passowrd);
    // cout<<"namaste duniya"<<endl;
    
    




    
    // dynamic memory
    // animal* suresh =new animal;
    // (*suresh).age=15;
    // (*suresh).name="billi";

    // // alternate method
    // suresh->age=17;
    // suresh->name="kutta";

    // suresh->eat();
    // suresh->sleep();

    // animal* a=new animal(19);
    // animal b(10);

    // animal* c=new animal(19,61,"rachit");
    // animal d(19,61,"rachit");


    // // object copy 
    // animal e=a;

    //  static memory will call the destructor automatically 
    animal a;
    a.age=5;


    // dynamic memory
    animal *b=new animal();
    b->age=12;
    // manually 
    delete b;

     

    
     

    



    



  
    return 0;
}