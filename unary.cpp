 //Operator overloading is a feature in object-oriented programming languages like C++ that allows operators to be redefined and used with user-defined data types (classes). It enables the programmer to provide special meanings to the operators when they are used with objects of a class.

// Concept of Unary and Binary Operator Overloading:
// Unary Operator Overloading:
//Unary operators operate on a single operand. In C++, unary operator overloading allows defining custom behaviors for unary operators when they are applied to objects of a class.

//Example:

#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    // Unary operator overloading (prefix increment)
    Number operator++() {
        num++;
        return *this;
    }

    void display() {
        cout << "Number: " << num << endl;
    }
};

int main() {
    Number numObj(5);
    ++numObj; // Applying unary operator to increment numObj
    numObj.display(); // Output: Number: 6
    return 0;
}
