#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int l =0, r = arr.size() - 1;
    while (l <= r){
      if (arr[l] == search_elem){
        return l;
      }
      if (arr[r] == search_elem){
        return r;
      }
      l += 1;
      r -= 1;
    }
    return std::nullopt;
  }

}  // namespace assignment