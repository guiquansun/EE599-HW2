#include "solution.h"


void Solution::Swap(std::string &s, int x, int y) {

  if (s.length() == 0) {
    return;
  }

  char record = s[x];
  s[x] = s[y];
  s[y] = record;
  return;
}

void Solution::Reverses(std::string &s) {
  int length = s.length();
  int start = 0;
  int end = length - 1;
  
  if (length == 0 || length == 1) {
    return;
  }

  while (start < end) {
    char record = s[start];
    s[start] = s[end];
    s[end] = record;
    start = start + 1;
    end = end - 1;
  }
  return;
  
}

void Solution::LowCase(std::string &s) {

  int length = s.length();
 
  
  if (length == 0 || length == 1) {
    return;
  }

  for (int i = 0; i < length; i++) {
    s[i] = tolower(s[i]);
  }

  return;
  
}

