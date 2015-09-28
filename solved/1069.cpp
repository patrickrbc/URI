#include <cstdio>
#include <cstring>

int main () {
  int n, i, lower, greater, diamonds;
  char sentence[1001];

  scanf("%d", &n);

  while (n--) {
    scanf("%s", sentence);
    lower = greater = diamonds =  0;
    for (i = 0; i < strlen(sentence); i++) {
      if (sentence[i] == '<') {
        lower++;
      } else if (sentence[i] == '>') {
        if (lower > 0) {
          diamonds++;
          lower--;
        }
      }
    }

    printf("%d\n", diamonds);
  }
  return 0;
}
