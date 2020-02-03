#include <iostream>
#include "src/lib/solution.h"

int main() {

    Solution solution;
    std::string inputs1 = "madam";
    if (solution.SimplePalindrome(inputs1)) {
        std::cout << "inputs: madam, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: madam, output: false" << std::endl;
    }

    std::string inputs2 = "racecar";
    if (solution.SimplePalindrome(inputs2)) {
        std::cout << "inputs: racecar, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: racecar, output: false" << std::endl;
    }

    std::string inputs3 = "10801";
    if (solution.SimplePalindrome(inputs3)) {
        std::cout << "inputs: 10801, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: 10801, output: false" << std::endl;
    }

    std::string inputs4 = "A man, a plan, a canal, Panama!";
    if (solution.ApproximatePalindrome(inputs4)) {
        std::cout << "inputs: A man, a plan, a canal, Panama!, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: A man, a plan, a canal, Panama!, output: false" << std::endl;
    }

    std::string inputs5 = "Was it a car or a cat I saw?";
    if (solution.ApproximatePalindrome(inputs5)) {
        std::cout << "inputs: Was it a car or a cat I saw?, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: Was it a car or a cat I saw?, output: false" << std::endl;
    }

    std::string inputs6 = "No 'x' in Nixon.";
    if (solution.ApproximatePalindrome(inputs6)) {
        std::cout << "inputs: No 'x' in Nixon, output: true" << std::endl;
    }
    else {
        std::cout << "inputs: No 'x' in Nixon, output: false" << std::endl;
    }






    
    
    
}