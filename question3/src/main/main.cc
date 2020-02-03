#include <iostream>
#include "src/lib/solution.h"

void printVector(std::vector<int> &input) {
  for (int i = 0; i < input.size(); i++) {
    std::cout << input[i] << " ";
  }
  std::cout << std::endl;
}

int main()
{
    Solution solution ;

    std::vector<int> inputs1 = {1,2,2,3};
    printVector(inputs1);
    solution.RemoveDuplicates1(inputs1);
    printVector(inputs1);
    std::cout << '\n';
   
    std::vector<int> inputs2 = {1,2,2,3,3};
    printVector(inputs2);
    solution.RemoveDuplicates2(inputs2);
    printVector(inputs2);
    std::cout << '\n';
    

    std::vector<int> inputs3 = {1, 2, 3};
    printVector(inputs3);
    solution.ReversedOrder(inputs3);
    printVector(inputs3);     
    std::cout << '\n';


    std::vector<int> inputs4 = {1, 2, 3};
    printVector(inputs4);
    solution.RemovedOdd(inputs4);
    printVector(inputs4);  
    std::cout << '\n';



    std::vector<int> inputs5_1 = {1, 2, 3};
    std::vector<int> inputs5_2 = {3, 5, 6};
    printVector(inputs5_1);
    printVector(inputs5_2);
    std::vector<int> result1 = solution.Concatenating(inputs5_1, inputs5_2);
    printVector(result1); 
    std::cout << '\n';


    std::vector<int> inputs6_1 = {1, 2, 3};
    std::vector<int> inputs6_2 = {3, 4, 5};
    printVector(inputs6_1);
    printVector(inputs6_2);
    std::vector<int> result2 = solution.FindUnion(inputs6_1, inputs6_2);
    printVector(result2); 
    std::cout << '\n';



    return EXIT_SUCCESS;
}