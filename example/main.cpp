#include "merge-sort.hpp"

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
  vector<int> arr = {5, -2, 3, 1, 4};
  arr = merge_sort(arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}