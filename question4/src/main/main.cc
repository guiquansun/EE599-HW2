#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int x = 20;
    int y = 30;
    std::cout << "Before: x = 20, y = 30" << std::endl;
    solution.swap(x, y);
    std::cout << "After swap(reference), x= " << x << " y= " << y << std::endl;
    int *m = &x;
    int *n = &y;
    solution.swap(m, n);
    std::cout << "After swap(pointers), x = " << x << " y = " << y << std::endl;


    return EXIT_SUCCESS;
}