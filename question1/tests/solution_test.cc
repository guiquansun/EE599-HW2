#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(AddTEST1, ReturnAdd) {
  Solution solution;
  int a = 7;
  int b = 10;
  int expected1 = 17;
  EXPECT_EQ(expected1, solution.Add(a, b));
}

TEST(AddTEST2, ReturnAdd2) {
  Solution solution;

  std::string c = "wo";
  std::string d = "shi";
  std::string expected2 = "woshi";
  EXPECT_EQ(expected2, solution.Add(c, d));

}

TEST(AddTEST3, ReturnAdd3) {
  Solution solution;

  int e = 7;
  std::string f = "xi";
  std::string expected3 = "7xi";
  EXPECT_EQ(expected3, solution.Add(e, f));

}

TEST(AddTEST4, ReturnAdd4) {
  Solution solution;
  std::string g = "niu";
  int h = 7;
  std::string expected4 = "niu7";
  EXPECT_EQ(expected4, solution.Add(g, h));
}