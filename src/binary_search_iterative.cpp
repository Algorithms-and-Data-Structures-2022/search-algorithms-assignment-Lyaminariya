#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    int l = 0;
    int r = arr.size();
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    if (r == 0){
      return std::nullopt;
    }
    while (l <= r){
      int m = (l+r)/2;
      if ((m < 0) || (m >= arr.size())){
        return std::nullopt;
      }
      if (arr[m] == search_elem){
        return m;
      }
      else if (arr[m]>search_elem){
        r = m - 1;
      }
      else {
        l = m + 1;
      }
    }
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    return std::nullopt;
  }

}  // namespace assignment