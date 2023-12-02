#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm> // for min and max

// #define SIZE1 100
// #define SIZE2 154

template <std::size_t Size1, std::size_t Size2>
void add_arrays(
    const std::array<int, Size1>& array1,
    const std::array<int, Size2>& array2,
    std::array<int, std::max(Size1, Size2)>& result_array)
{
    for (std::size_t i = 0; i < std::max(Size1, Size2); ++i) {
        if (i < Size1)
            result_array[i] = array1[i];
        if(i < Size2)
            result_array[i] += array2[i];
    }
}

template <std::size_t Size>
std::array<int, Size> init_array() {
    std::array<int, Size> array;
    for (std::size_t i = 0; i < Size; ++i)
        array[i] = i;
    return array;
}

int main() {
    const std::size_t SIZE1 = 100;
    const std::size_t SIZE2 = 154;

    std::array<int, SIZE1> array1 = init_array<SIZE1>();
    std::array<int, SIZE2> array2 = init_array<SIZE2>();

    std::array<int, std::max(SIZE1, SIZE2)> result_array{};

    add_arrays(array1, array2, result_array);

    for (int value: result_array)
        std::cout << value << " ";
    std::cout << "\n";

    return 0;
}
