#include <iostream>
class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num1(2.5, 3.5);
    Complex num2(1.2, 2.8);

    Complex sum = num1 + num2;

    std::cout << "Sum: ";
    sum.display();
    return 0;
}

