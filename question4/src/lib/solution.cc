#include "solution.h"

void Solution::swap(int &x, int &y) {
  int record = x;
  x = y;
  y = record;

}

void Solution:: swap(int *x, int *y) {
  int record = *x;
  *x = *y;
  *y = record;

}

