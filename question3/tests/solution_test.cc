#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(RemoveDuplicates1Should, ReturnRemoveDuplicates1) {
  Solution solution;
  
  std::vector<int> inputs1 = {};
  std::vector<int> expected1 = {};
  solution.RemoveDuplicates1(inputs1);
  EXPECT_EQ(expected1, inputs1);

  std::vector<int> inputs2 = {1, 2};
  std::vector<int> expected2 = {1, 2};
  solution.RemoveDuplicates1(inputs2);
  EXPECT_EQ(expected2, inputs2);

  std::vector<int> inputs3 = {1, 2, 3, 3, 4};
  std::vector<int> expected3 = {1, 2, 3, 4};
  solution.RemoveDuplicates1(inputs3);
  EXPECT_EQ(expected3, inputs3);

}

TEST(RemoveDuplicates2Should, ReturnRemoveDuplicates2) {
  Solution solution;
  
  std::vector<int> inputs1 = {};
  std::vector<int> expected1 = {};
  solution.RemoveDuplicates2(inputs1);
  EXPECT_EQ(expected1, inputs1);

  std::vector<int> inputs2 = {1, 2};
  std::vector<int> expected2 = {1, 2};
  solution.RemoveDuplicates2(inputs2);
  EXPECT_EQ(expected2, inputs2);

  std::vector<int> inputs3 = {1, 2, 3, 3, 4};
  std::vector<int> expected3 = {1, 2, 3, 4};
  solution.RemoveDuplicates2(inputs3);
  EXPECT_EQ(expected3, inputs3);

}
TEST(ReverseOrderShould, ReturnReverseOrder) {
  Solution solution;
  
  std::vector<int> inputs1 = {};
  std::vector<int> expected1 = {};
  solution.ReversedOrder(inputs1);
  EXPECT_EQ(expected1, inputs1);

  std::vector<int> inputs2 = {1};
  std::vector<int> expected2 = {1};
  solution.ReversedOrder(inputs2);
  EXPECT_EQ(expected2, inputs2);

  std::vector<int> inputs3 = {1, 2, 3, 4};
  std::vector<int> expected3 = {4, 3, 2, 1};
  solution.ReversedOrder(inputs3);
  EXPECT_EQ(expected3, inputs3);

  std::vector<int> inputs4 = {1, 2, 3, 4, 5};
  std::vector<int> expected4 = {5, 4, 3, 2, 1};
  solution.ReversedOrder(inputs4);
  EXPECT_EQ(expected4, inputs4);

}

TEST(RemovedOddShould, ReturnRemovedOdd) {
  Solution solution;
  
  std::vector<int> inputs1 = {};
  std::vector<int> expected1 = {};
  solution.RemovedOdd(inputs1);
  EXPECT_EQ(expected1, inputs1);

  std::vector<int> inputs2 = {1};
  std::vector<int> expected2 = {};
  solution.RemovedOdd(inputs2);
  EXPECT_EQ(expected2, inputs2);

  std::vector<int> inputs3 = {1, 2, 3, 4};
  std::vector<int> expected3 = {2, 4};
  solution.RemovedOdd(inputs3);
  EXPECT_EQ(expected3, inputs3);

}

TEST(ConcatenatingShould, ReturnConcatenating) {
  Solution solution;
  
  std::vector<int> inputs1 = {};
  std::vector<int> inputs2 = {};
  std::vector<int> expected1 = {};
  std::vector<int> finalresult1 = solution.Concatenating(inputs1, inputs2);
  EXPECT_EQ(expected1, finalresult1);

  std::vector<int> inputs3 = {1, 2, 3};
  std::vector<int> inputs4 = {};
  std::vector<int> expected2 = {1, 2, 3};
  std::vector<int> finalresult2 = solution.Concatenating(inputs3, inputs4);
  EXPECT_EQ(expected2, finalresult2);

  std::vector<int> inputs5 = {};
  std::vector<int> inputs6 = {1, 2, 3};
  std::vector<int> expected3 = {1, 2, 3};
  std::vector<int> finalresult3 = solution.Concatenating(inputs5, inputs6);
  EXPECT_EQ(expected3, finalresult3);

  std::vector<int> inputs7 = {1, 2, 3};
  std::vector<int> inputs8 = {3, 4, 5};
  std::vector<int> expected4 = {1, 2, 3, 3, 4, 5};
  std::vector<int> finalresult4 = solution.Concatenating(inputs7, inputs8);
  EXPECT_EQ(expected4, finalresult4);
  

}

TEST(FindUnionShould, ReturnFindUnion) {
  Solution solution;
  
  std::vector<int> inputs1 = {};
  std::vector<int> inputs2 = {};
  std::vector<int> expected1 = {};
  std::vector<int> finalresult1 = solution.FindUnion(inputs1, inputs2);
  EXPECT_EQ(expected1, finalresult1);

  std::vector<int> inputs3 = {1, 2, 3};
  std::vector<int> inputs4 = {};
  std::vector<int> expected2 = {};
  std::vector<int> finalresult2 = solution.FindUnion(inputs3, inputs4);
  EXPECT_EQ(expected2, finalresult2);

  std::vector<int> inputs5 = {};
  std::vector<int> inputs6 = {1, 2, 3};
  std::vector<int> expected3 = {};
  std::vector<int> finalresult3 = solution.FindUnion(inputs5, inputs6);
  EXPECT_EQ(expected3, finalresult3);

  std::vector<int> inputs7 = {1, 2, 3};
  std::vector<int> inputs8 = {3, 4, 5};
  std::vector<int> expected4 = {3};
  std::vector<int> finalresult4 = solution.FindUnion(inputs7, inputs8);
  EXPECT_EQ(expected4, finalresult4);
  

}

