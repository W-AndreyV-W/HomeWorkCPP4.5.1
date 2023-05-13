#include <iostream>
#include <vector>
#include <cmath>

template <class T> T square(T& num) {

    num = static_cast<T>(pow(static_cast<long double>(num), 2.0));
    return 0;
}

template <class T> T square(std::vector<T>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = static_cast<T>(pow(static_cast<long double>(arr[i]), 2.0));
    }
    return 0;
}

int main()
{
    auto num_int = 8;
    auto num_double = 0.5;
    std::vector<double> arr{ 1, 0.5, 3, 6, -9 };

    std::cout << "[IN]:\t" << num_int << std::endl;
    square(num_int);
    std::cout << "[OUT]:\t" << num_int << std::endl;

    std::cout << "[IN]:\t" << num_double << std::endl;
    square(num_double);
    std::cout << "[OUT]:\t" << num_double << std::endl;

    std::cout << "[IN]:\t";
    for (double num : arr) {
        std::cout << num << ",\t";
    }
    std::cout << std::endl;
    std::cout << "[OUT]:\t";
    square(arr);
    for (double num : arr) {
        std::cout << num << ",\t";
    }
    std::cout << std::endl;
}