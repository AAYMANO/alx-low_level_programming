#include <iostream>

int main() {
    int a[] = {4, 8, 98, 1, 5}; // Do not modify this line
    int* p = &a[0]; // Do not modify this line
    // Add your code below this line
    std::cout << "a[2] = " << *(p + 2) << std::endl;
    return 0;
}
