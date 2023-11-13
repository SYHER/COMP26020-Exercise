#include <iostream>

class Complex {
private:
    int real;
    int imag;

public:
    Complex(): real(0), imag(0) {};
    Complex(int real_part, int imaginary_part);
    int get_real_part() const;
    int get_imaginary_part() const;

    Complex operator+(const Complex& other) const;
};

Complex::Complex(int real_part, int imaginary_part) 
    : real(real_part), imag(imaginary_part) {};

int Complex::get_real_part() const{
    return real;
}

int Complex::get_imaginary_part() const{
    return imag;
}

/* implement operator overrides here */
std::ostream& operator << (std::ostream& out, const Complex& complex) {
    out << "(" << complex.get_real_part() << "+" << complex.get_imaginary_part() << "i)";
    return out;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    
    std::cout << c1 + c2 << "\n"; // should print (13+16i)

    return 0;
}
