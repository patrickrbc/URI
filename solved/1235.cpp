#include <cstdio>
#include <cstring>

int main () {

  int n, i, len, aux;
  char sentence[200];
  char *first, *second;

  first = new char(200);
  second = new char(200);

  scanf("%d", &n);
  getchar();

  while (n--) {
    fgets(sentence, 102, stdin);
    sentence[strlen(sentence)-1] = '\0';
    len = strlen(sentence);

    for (i = (len/2)-1; i >= 0; i--) {
      printf("%c", sentence[i]);
    }

    for (i = len-1; i >= len/2; i--) {
      printf("%c", sentence[i]);
    }
    printf("\n");
  }

  return 0;
}
