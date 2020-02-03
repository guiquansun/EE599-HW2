#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string s1 = "TEST";
    int x = 0;
    int y = 1;
    solution.Swap(s1, x, y);
    std::cout << "input (TEST, 0, 1), output: " << s1 << std::endl;

    std::string s2 = "EE599";
    
    solution.Reverses(s2);
    std::cout << "input (TEST, 0, 1), output: " << s2 << std::endl;

    std::string s3 = "EE599";
    
    solution.LowCase(s3);
    std::cout << "input (TEST, 0, 1), output: " << s3 << std::endl;




    return EXIT_SUCCESS;
}