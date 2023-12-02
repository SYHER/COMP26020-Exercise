#include <iostream>

template <typename T>
class Complex {
private:
    T real;
    T imag;

public:
    Complex() : real(T()), imag(T()) {}
    Complex(T real_part, T imaginary_part);
    T get_real_part() const;
    T get_imaginary_part() const;
    
    Complex operator+(const Complex& other) const;
};

template<typename T>
Complex<T>::Complex(T real_part, T imaginary_part) 
    : real(real_part), imag(imaginary_part) {}

template<typename T>
T Complex<T>::get_real_part() const{
    return real;
}

template<typename T>
T Complex<T>::get_imaginary_part() const{
    return imag;
}

template<typename T>
Complex<T> Complex<T>::operator+(const Complex& other) const{
    return Complex(real + other.real, imag + other.imag);
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const Complex<T>& c) {
    return std::cout << "(" << c.get_real_part() << "+" << c.get_imaginary_part() << "i)";
}

template <typename T>
void add_and_print(T t1, T t2) {
    std::cout << t1 << " + " << t2 << " = " << t1 + t2 << "\n";
}

int main(int argc, char **argv) {
    Complex<int> c1(4, 5);
    Complex<int> c2(9, 11);
    Complex<double> c3(4.1, 5.1);
    Complex<double> c4(8.9, 10.9);

    add_and_print(c1, c2); // should print "(4+5i) + (9+11i) = (13+16i)"
    add_and_print(c3, c4); // should print "(4.1+5.1i) + (8.9+10.9i) = (13+16i)"

    return 0;
}
