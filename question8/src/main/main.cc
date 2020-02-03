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
    std::vector<int> inputs = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    printVector(inputs);
    solution.SortReverse(inputs);
    printVector(inputs);
    std::cout << '\n';
    std::vector<int> inputs2 = {637, 231, 123, 43, 69, 43, 10, 7, 21, 99, 0, 500};
    printVector(inputs2);
    solution.SortReverse(inputs2);
    printVector(inputs2);

    

    return EXIT_SUCCESS;
}