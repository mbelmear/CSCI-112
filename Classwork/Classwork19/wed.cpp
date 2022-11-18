#include<iostream>
#include<string>
using namespace std;

//Michael Belmear
//Classwork 11/17/2022

class Animal{
    public:
    Animal(){
        cout << "I am an animal\n";
    };
    int const GetSpeed(){return speed;}
    protected:
    int speed;
};

class Cat : public Animal{
    public:
    Cat(){
        cout << "I am a cat\n";
        speed = 30;
    }
};

class Dog : public Animal{
    public:
    Dog(){
        cout<< "I am a dog\n";
        speed = 20;
    }
};

class Giraffe : public Animal{
    public:
    Giraffe(){
        cout<< "I am a giraffe\n";
        speed = 37;
    }
};

int main(void){
    Cat c;
    Dog d;
    Giraffe g;
    cout<<"Cat's speed is "<<c.GetSpeed()<<endl;
    cout<<"Dog's speed is "<<d.GetSpeed()<<endl;
    cout<<"Giraffe's speed is "<<g.GetSpeed()<<endl;
    return 0;
}
