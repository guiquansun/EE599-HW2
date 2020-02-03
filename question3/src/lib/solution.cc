#include "solution.h"
#include <set> 


void Solution::RemoveDuplicates1(std::vector<int> &inputs) { 

  if (inputs.size() == 0 || inputs.size() == 1) {
    return;
  }

  for (auto it = inputs.begin(); it != inputs.end(); ++it) {
    const int &n = *it;
    for (auto back = inputs.end() - 1; back > it; --back) {
      int &k = *back;
      if (k == n) {
        inputs.erase(back);
      }

    }
  }

  return;
 
}


void Solution::RemoveDuplicates2(std::vector<int> &inputs) { 

  if (inputs.size() == 0) {
    return;
  }

  std::set<int> record;
  for (auto it = inputs.begin(); it != inputs.end();) {
    const int &n = *it;
    if (record.find(n) != record.end()) {
      inputs.erase(it);
      continue;

    }
    else {
      record.insert(n);
     
    }

    it = it + 1;

  }

}


void Solution::ReversedOrder(std::vector<int> &inputs) { 

  int length = inputs.size();
  int start = 0;
  int end = length - 1;
  
  if (length == 0 || length == 1) {
    return;
  }

  while (start < end) {
    int record = inputs[start];
    inputs[start] = inputs[end];
    inputs[end] = record;
    start = start + 1;
    end = end - 1;
  }
  return;
  
}

void Solution::RemovedOdd(std::vector<int> &inputs) {

  if (inputs.size() == 0) {
    return;
  }

  for (auto it = inputs.begin(); it != inputs.end();) {

    const int &n = *it;

    if (n % 2 != 0) {
      inputs.erase(it);
      continue;
    }
    it = it + 1;

  }
  return;
}

std::vector<int> Solution::Concatenating(std::vector<int> &inputs1, std::vector<int> &inputs2) {

  std::vector<int> result;
  for (int i = 0; i < inputs1.size(); i++) {

    result.push_back(inputs1[i]);

  }

  for (int j = 0; j < inputs2.size(); j++) {

     result.push_back(inputs2[j]);

  }

  return result;

}

std::vector<int> Solution::FindUnion(std::vector<int> &inputs1, std::vector<int> &inputs2) {

  std::vector<int> result;
  std::set<int> record;

  for (int i = 0; i < inputs1.size(); i++) {
    record.insert(inputs1[i]);
  }

  for (int j = 0; j < inputs2.size(); j++) {
    if (record.find(inputs2[j]) != record.end()) {
      result.push_back(inputs2[j]);
    }
  }

  return result;
}











