#include <cstdio>
#include <cstring>

int main () {
  int n, i, moves;
  char a[10001], b[10001];

  scanf("%d\n", &n);
  
  while (n--) {
    scanf("%s %s", a, b);

    moves = 0;
    for (i = 0; i < strlen(a); i++) {
      if (b[i] < a[i]) {
        moves += b[i] - a[i] + 26;
      } else {
        moves += b[i] - a[i];
      }
    }
    printf("%d\n", moves);
  }
  return 0;
}
