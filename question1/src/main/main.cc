#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    int a = 3;
    int b = 5;
    std::cout << "input: a = 3, b = 5, output = "<< solution.Add(a, b) << std::endl;

    std::string c = "abc";
    std::string d = "defg";
    std::cout << "input: c = abc, d = defg, output = "<< solution.Add(c, d) << std::endl;

    int e = 599;
    std::string f = "EE";
    std::cout << "input: e = 599, d = EE, output = "<< solution.Add(e, f) << std::endl;

    std::string g = "EE";
    int h = 599;
    std::cout << "input: g = EE, h = 599, output = "<< solution.Add(g, h) << std::endl;



    return EXIT_SUCCESS;
}