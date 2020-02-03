#include "solution.h"
#include<algorithm>

void Solution::SortReverse(std::vector<int> &inputs) {

  if (inputs.size() == 0 || inputs.size() == 1) {
    return;
  }

// first step: sort from low to high
  std::sort(inputs.begin(), inputs.end());

// find median and reverse, we need pay attention to odd and even

if (inputs.size() % 2 != 0) {
  int mid = inputs.size() / 2;

  std::reverse(inputs.begin(), inputs.begin() + mid);
  std::reverse(inputs.begin() + mid + 1, inputs.end());

}

else {
  int mid2 = inputs.size() / 2;

  std::reverse(inputs.begin(), inputs.begin() + mid2);
  std::reverse(inputs.begin() + mid2, inputs.end());

}

return;



}

