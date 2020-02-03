#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(JudgeMappable1, ReturnJudgeMappable1) {
  Solution solution;
  std::string from1="aapp";
  std::string to1="ddgg";
  std::map<char,char> result1 = solution.JudgeMappable(from1,to1);
  std::map<char,char> expected1 = {{'a','d'},{'p','g'}};
  EXPECT_EQ(expected1, result1);
}
TEST(JudgeMappable2, ReturnJudgeMappable2) {
  Solution solution;
  std::string from2="odd";
  std::string to2="lee";
  std::map<char,char> result2 = solution.JudgeMappable(from2,to2);
  std::map<char,char> expected2 = {{'o','l'},{'d','e'}};
  EXPECT_EQ(expected2, result2);
}
TEST(JudgeMappable3, ReturnJudgeMappable3) {
  Solution solution;
  std::string from3="was";
  std::string to3="kill";
  std::map<char,char> result3 = solution.JudgeMappable(from3,to3);
  std::map<char,char> expected3 = {};
  EXPECT_EQ(expected3, result3);
}
TEST(JudgeMappable4, ReturnJudgeMappable4) {
  Solution solution;
  std::string from4="abc";
  std::string to4="def";
  std::map<char,char> result4 = solution.JudgeMappable(from4,to4);
  std::map<char,char> expected4 = {{'a','d'},{'b','e'},{'c','f'}};
  EXPECT_EQ(expected4, result4);
}
TEST(JudgeMappable5, ReturnJudgeMappable5) {
  Solution solution;
  std::string from5="aba";
  std::string to5="cde";
  std::map<char,char> result5 = solution.JudgeMappable(from5, to5);
  std::map<char,char> expected5 = {};
  EXPECT_EQ(expected5, result5);
}