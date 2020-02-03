#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SimplePalindromeTEST1, ReturnSimplePalindrome1) {
  Solution solution;
  std::string s1 = "cooc";
  bool expected1 = true;
  bool result1 = solution.SimplePalindrome(s1);
  EXPECT_EQ(expected1, result1);
}

TEST(SimplePalindromeTEST2, ReturnSimplePalindrome2) {
  Solution solution;
  std::string s2 = "apple";
  bool expected2 = false;
  bool result2 = solution.SimplePalindrome(s2);
  EXPECT_EQ(expected2, result2);
}

TEST(ApproximatePalindromeTEST3, ReturnApproximatePalindrome3) {
  Solution solution;
  std::string s3 = "May major is Electrical Enginnering!";
  bool expected3 = false;
  bool result3 = solution.ApproximatePalindrome(s3);
  EXPECT_EQ(expected3, result3);

}

TEST(ApproximatePalindromeTEST4, ReturnApproximatePalindrome4) {
  Solution solution;
  std::string s4 = "I am MaI!";
  bool expected4 = true;
  bool result4 = solution.ApproximatePalindrome(s4);
  EXPECT_EQ(expected4, result4);
}

