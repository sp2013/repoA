// Repo A: main.cpp
#include "math_operations/math_operations.h"  // Using Repo B

#include <iostream>

int main() {
    int result = math_operations::multiply_and_add(2, 3, 4);  // Call Repo B
    std::cout << "The result is: " << result << std::endl;
    return 0;
}
