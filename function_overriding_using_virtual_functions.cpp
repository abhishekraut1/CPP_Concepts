#include<bits/stdc++.h>
using namespace std;
// function overriding using virtual function
class Animal{
    public:
        virtual void speak(){
            cout<<"Animal speaks"<<endl;
        }
};

class Dog : public Animal{
    public:
        void speak() override {
            cout<<"Dog barks"<<endl;
        }
};

class Cat : public Animal{
    public:
        void speak() override {
            cout<<"Cat meows"<<endl;
        }
};

int main(){
    Animal *animalPtr;

    Animal animal;
    Dog dog;
    Cat cat;
    
    animalPtr = &animal;
    animalPtr->speak();
    
    animalPtr = &dog;
    animalPtr->speak();

    animalPtr = &cat;
    animalPtr->speak();
    
    return 0;
}