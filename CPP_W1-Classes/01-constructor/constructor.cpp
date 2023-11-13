#include <iostream>

class Pair {
private:
    int x, y;
    
public:
    Pair(int x, int y) : x(x), y(y) {}

    int getx() const {
        return x;
    }
    int gety() const {
        return y;
    }

};

int main(int argc, char **argv) {
    Pair p(10, 20);

    std::cout << "p.x is " << p.getx() << ", p.y is " << p.gety() << "\n";

    return 0;
}
