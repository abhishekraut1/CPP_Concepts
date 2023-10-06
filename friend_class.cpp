#include <iostream>

class FriendClass;

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    // Declare FriendClass as a friend of MyClass
    friend class FriendClass;
};

class FriendClass {
public:
    void accessPrivateData(const MyClass& myObj) {
        // FriendClass can access the private member of MyClass
        std::cout << "FriendClass accessing privateData: " << myObj.privateData << std::endl;
    }
};

int main() {
    MyClass myObject(42);
    FriendClass friendObject;

    friendObject.accessPrivateData(myObject);

    return 0;
}
