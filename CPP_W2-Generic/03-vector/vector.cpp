#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm> // for min and max
#include <vector>
#include <numeric>

void add_arrays(std::vector<int>& array1, std::vector<int>& array2, std::vector<int>& result_array) {
    int max_size = std::max(array1.size(), array2.size());

    for (int i = 0; i < max_size; ++i) {
    if (i < array1.size())
        result_array[i] = array1[i];

    if (i < array2.size())
        result_array[i] += array2[i];
    }
}

void init_array(std::vector<int>& array) {
    std::iota(array.begin(), array.end(), 0);
}

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <size array 1> <size array 2>\n";
        return -1;
    }

    int size1 = std::atoi(argv[1]);
    int size2 = std::atoi(argv[2]);
    int result_size = std::max(size1, size2);

    std::vector<int> array1(size1);
    std::vector<int> array2(size2);
    std::vector<int> result_array(result_size);

    init_array(array1);
    init_array(array2);

    add_arrays(array1, array2, result_array);

    for (int i = 0; i < result_size; ++i)
        std::cout << result_array[i] << " ";
    std::cout << "\n";

    return 0;
}
