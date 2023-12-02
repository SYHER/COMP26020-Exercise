#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>

#define SIZE (32 * 1024 * 1024)

int dot(std::map<int, int>& a, std::map<int, int>& b)
{
    int sum = 0;
    for (auto& [key, value] : a) {
        auto it = b.find(key);
        if(it != b.end()){
            sum += value * it -> second;
        }
    }
    return sum;
}

void init_vector(std::map<int, int>& v)
{
	v.clear();
	for (int i = 0; i < SIZE; ++i) {
        if ((rand() % 0xfff) == 0)
            v[i] = rand() & 0xf;
    }
}


int main(int argc, char **argv)
{
    srand(0);
    std::map<int, int> a, b;
    init_vector(a);
    init_vector(b);

    std::cout << dot(a, b) << "\n";

    return 0;
}