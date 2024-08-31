#include "merge-sort.hpp"

#include <gtest/gtest.h>

// Teste para um vetor vazio
TEST(MergeSortTest, HandlesEmptyVector) {
  vector<int> input = {};
  vector<int> expected = {};
  EXPECT_EQ(merge_sort(input), expected);
}

// Teste para um vetor com um único elemento
TEST(MergeSortTest, HandlesSingleElement) {
  vector<int> input = {1};
  vector<int> expected = {1};
  EXPECT_EQ(merge_sort(input), expected);
}

// Teste para um vetor já ordenado
TEST(MergeSortTest, HandlesSortedVector) {
  vector<int> input = {1, 2, 3, 4, 5};
  vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(merge_sort(input), expected);
}

// Teste para um vetor em ordem inversa
TEST(MergeSortTest, HandlesReverseOrder) {
  vector<int> input = {5, 4, 3, 2, 1};
  vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(merge_sort(input), expected);
}

// Teste para um vetor com elementos duplicados
TEST(MergeSortTest, HandlesDuplicates) {
  vector<int> input = {4, 2, 5, 2, 3, 1, 4};
  vector<int> expected = {1, 2, 2, 3, 4, 4, 5};
  EXPECT_EQ(merge_sort(input), expected);
}

// Teste para um vetor com elementos aleatórios
TEST(MergeSortTest, HandlesRandomOrder) {
  vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
  vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9};
  EXPECT_EQ(merge_sort(input), expected);
}

TEST(MergeSortTest, anthing) {
  EXPECT_FALSE(true);
}