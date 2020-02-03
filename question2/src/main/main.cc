#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int arr1[] = {0, 1, 2, 3};
    char arr2[] = {'a', 'b', 'c', 'd'};
    float arr3[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

    int length1 = sizeof(arr1) / sizeof(arr1[0]);
    int length2 = sizeof(arr2) / sizeof(arr2[0]);
    int length3 = sizeof(arr3) / sizeof(arr3[0]);


 
    std::cout << "inputs: arr1[] = {0, 1, 2, 3}, output: " << length1 << std::endl;
    std::cout << "inputs: arr2[] = {'a', 'b', 'c', 'd'}, output: " << length2 << std::endl;
    std::cout << "inputs: arr3[] = {1000.0, 2.0, 3.4, 7.0, 50.0}, output: " << length3 << std::endl;

    return EXIT_SUCCESS;
}