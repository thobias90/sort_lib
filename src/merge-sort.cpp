#include "merge-sort.hpp"

vector<int> merge(vector<int> left, vector<int> right);
vector<int> merge_sort(vector<int> arr) {
  if (arr.size() <= 1) return arr;
  const int mid = arr.size() / 2;
  vector<int> left(arr.begin(), arr.begin() + mid);
  vector<int> right(arr.begin() + mid, arr.end());
  return merge(merge_sort(left), merge_sort(right));
}

vector<int> merge(vector<int> left, vector<int> right) {
  vector<int> result;
  int i = 0, j = 0;
  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      result.push_back(left[i]);
      i++;
    } else {
      result.push_back(right[j]);
      j++;
    }
  }
  while (i < left.size()) {
    result.push_back(left[i]);
    i++;
  }
  while (j < right.size()) {
    result.push_back(right[j]);
    j++;
  }
  return result;
}
