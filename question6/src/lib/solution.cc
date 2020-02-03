#include "solution.h"

bool Solution::SimplePalindrome(std::string &s) {
  if (s.length() == 0 || s.length() == 1) {
    return true;
  }

  int start = 0;
  int end = s.length() - 1;
  
  while (start < end) {
    if(s[start] == s[end]) {
      start = start + 1;
      end = end - 1;
    }
    else {
      return false;
    }
  }
  return true;
   
}

bool Solution::ApproximatePalindrome(std::string &s) {

  int left = 0;
  int right = s.length() - 1;
  
    
  while ( left < right) {
    while (left < right && !isalnum(s[left])) {
      left++;
    }
    while (left < right && !isalnum(s[right])) {
      right--;
    }
    if (tolower(s[left]) != tolower(s[right])) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}
    



