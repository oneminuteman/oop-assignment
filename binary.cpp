#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i) : real(r), imag(i) {}

    // Binary operator overloading (addition)
    Complex operator+(const Complex& c) {
        Complex temp(real + c.real, imag + c.imag);
        return temp;
    }

    void display() {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex result = c1 + c2; // Applying binary operator to add c1 and c2
    result.display(); // Output: Real: 6, Imaginary: 8
    return 0;
}


 //Program to Display Multiples of 5, Squares, and Cubes:

 #include <iostream>
using namespace std;

// Function to calculate square of a number
int squared(int num) {
    return num * num;
}

// Function to calculate cube of a number
int cubed(int num) {
    return num * num * num;
}

int main() {
    cout << "Multiples of 5, Squares, and Cubes:" << endl;
    for (int i = 5; i <= 100; i += 5) {
        cout << "Number: " << i << ", Square: " << squared(i) << ", Cube: " << cubed(i) << endl;
    }
    return 0;
}



