#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SortReverseShould1, ReturnSortReverse1) {
  Solution solution;
  std::vector<int> inputs1 = {};
  solution.SortReverse(inputs1);
  std::vector<int> expected1 = {};
  EXPECT_EQ(expected1, inputs1);

}

TEST(SortReverseShould2, ReturnSortReverse2) {
  Solution solution;
  std::vector<int> inputs2 = {3, 4, 2, 8, 9, 7, 6};
  solution.SortReverse(inputs2);
  std::vector<int> expected2 = {4, 3, 2, 6, 9, 8, 7};
  EXPECT_EQ(expected2, inputs2);
}

TEST(SortReverseShould3, ReturnSortReverse3) {
  Solution solution;
  std::vector<int> inputs3 = {3, 4, 2, 8, 9, 7};
  solution.SortReverse(inputs3);
  std::vector<int> expected3 = {4, 3, 2, 9, 8, 7};
  EXPECT_EQ(expected3, inputs3);
}