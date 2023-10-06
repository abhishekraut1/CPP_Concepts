#include <iostream>
using namespace std;

// Forward declaration of the class
class MyClass;

// Friend function declaration
void friendFunction(const MyClass& obj);

class MyClass {
private:
    int privateData;

public:
    MyClass(int data){
        privateData = data;
    }
    // Declare the friend function
    friend void friendFunction(const MyClass& obj);
};

// Definition of the friend function
void friendFunction(const MyClass& obj) {
    // The friend function can access the private member of MyClass
    cout << "Friend Function accessing privateData: " << obj.privateData << endl;
}

int main() {
    MyClass myObject(100);

    // Call the friend function
    friendFunction(myObject);

    return 0;
}


