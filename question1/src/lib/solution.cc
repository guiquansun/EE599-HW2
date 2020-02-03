#include "solution.h"


int Solution::Add(int a, int b) {
  return a + b;
}

std::string Solution::Add(std::string a, std::string b) {
  std::string result;

  result = a + b;
  return result;
}

std::string Solution::Add(int a, std::string b) {
  std::string result;
  result = std::to_string(a) + b;

  return result;
  
}

std::string Solution::Add(std::string a, int b) {
  std::string result;
  result = a + std::to_string(b);

  return result;
  
}
