#include <iostream>
#include <type_traits>

class Complex {
private:
    int real;
    int imag;

public:
    Complex(): real(0), imag(0) {}
    Complex(int real_part, int imaginary_part);
    int get_real_part() const{
        return real;
    }
    int get_imaginary_part() const{
        return imag;
    }
};

Complex::Complex(int real_part, int imaginary_part) 
    : real(real_part), imag(imaginary_part) {};

/* implement add_and_print here */
void add_and_print(const Complex& c1, const Complex& c2) {
    std::cout << "(" << c1.get_real_part() << "+" << c1.get_imaginary_part() << "i) + "
                 << "(" << c2.get_real_part() << "+" << c2.get_imaginary_part() <<"i) = "
                 << "(" << c1.get_real_part() + c2.get_real_part() << "+"
                 << c1.get_imaginary_part() + c2.get_imaginary_part() << "i)" <<std::endl;
}

void add_and_print(int i1, int i2) {
    std::cout << i1 << " + " << i2 << " = " << i1 + i2 << std::endl;
}

void add_and_print(double d1, double d2) {
    std::cout << d1 << " + " << d2 << " = " << d1 + d2 << std::endl;
}

int main(int argc, char **argv) {
    Complex c1(4, 5);
    Complex c2(9, 11);
    int i1 = 4, i2 = 9;
    double d1 = 5.8, d2 = 11.2;

    add_and_print(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"
    add_and_print(i1, i2); // should print "4 + 9 = 13"
    add_and_print(d1, d2); // should print "5.800000 + 11.200000 = 17.000000"

    return 0;
}
