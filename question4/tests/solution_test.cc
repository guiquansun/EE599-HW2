#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapReferenceTEST, ReturnSwapReferenceTEST) {
  Solution solution;
  int x = 50;
  int y = 60;
  int expected_x = 60;
  int expected_y = 50;
  solution.swap(x, y);
  EXPECT_EQ(expected_x, x);
  EXPECT_EQ(expected_y, y);

}

TEST(PointersReferenceTEST, ReturnPointersReferenceTEST) {
  Solution solution;
  int x = 70;
  int y = 80;
  int expected_x = 80;
  int expected_y = 70;

  int *m = &x;
  int *n = &y;
  solution.swap(m, n);
  EXPECT_EQ(expected_x, x);
  EXPECT_EQ(expected_y, y);

}