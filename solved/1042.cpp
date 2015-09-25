#include <cstdio>
#include <array>
#include <algorithm>

int main () {

  using namespace std;
  int i;
  array<int,3> arr, sorted;
  
  scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

  sorted = arr;
  sort(begin(sorted), end(sorted));

  for (i = 0; i < arr.size(); i++) {
    printf("%d\n", sorted[i]);
  }

  printf("\n");

  for (i = 0; i < arr.size(); i++) {
    printf("%d", arr[i]);

    if (i != (arr.size()-1)) {
      printf("\n");
    }
  }

  return 0;
}
