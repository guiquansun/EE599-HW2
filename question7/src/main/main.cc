#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::string from1 = "add";
    std::string to1 = "egg";
    std::cout << "inputs: from = add, to = egg, outputs: " << std::endl;
    std::map<char, char> result1 = solution.JudgeMappable(from1,to1);
    for(auto n: result1){
        std::cout << n.first << "->" << n.second << ' ';
    }
    std::cout << '\n';

    std::string from2 = "extreme";
    std::string to2 = "egg";
    std::cout << "inputs: from = extreme, to = egg, outputs: " << std::endl;
    std::map<char, char> result2 = solution.JudgeMappable(from2,to2);
    for(auto n: result2){
        std::cout << n.first << "->" << n.second << ' ';
    }
    std::cout << '\n';

    std::string from3 = "harder";
    std::string to3 = "waiter";
    std::cout << "inputs: from = harder, to = waiter, outputs: " << std::endl;
    std::map<char, char> result3 = solution.JudgeMappable(from3,to3);
    for(auto n: result3){
        std::cout << n.first << "->" << n.second << ' ';
    }
    std::cout << '\n';

    std::string from4 = "aabbrr";
    std::string to4 = "ddeekk";
    std::cout << "inputs: from = aabbrr, to = ddeekk, outputs: " << std::endl;
    std::map<char, char> result4 = solution.JudgeMappable(from4,to4);
    for(auto n: result4){
        std::cout << n.first << "->" << n.second << ' ';
    }
    std::cout << '\n';
    
    


    return EXIT_SUCCESS;
}