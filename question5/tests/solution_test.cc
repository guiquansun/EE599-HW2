#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SwapTEST, ReturnSwapTEST) {
  Solution solution;
  std::string s = "EE559";
  int x = 0;
  int y = 2;
  std::string expected = "5EE59";
  solution.Swap(s, x, y);
  EXPECT_EQ(expected, s);
}

TEST(ReverseTEST, ReturnReverseTEST) {
  Solution solution;
  std::string s = "gogogo";
  std::string expected = "ogogog";
  solution.Reverses(s);
  EXPECT_EQ(expected, s);
}

TEST(LowCaseTEST, ReturnLowCaseTEST) {
  Solution solution;
  std::string s = "GoGoGo999";
  std::string expected = "gogogo999";
  solution.LowCase(s);
  EXPECT_EQ(expected, s);
}
