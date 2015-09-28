#include <cstdio>
#include <cstring>
#include <locale>

int main () {
  int i, spaces;
  char sentence[51];

  while (fgets(sentence, 51, stdin) != NULL) {
    spaces = 0;
    for (i = 0; i < strlen(sentence); i++) {
      if (sentence[i] == ' ') {
        spaces++;
      }
      if ((i-spaces)%2 == 0) {
        sentence[i] = std::toupper(sentence[i]);
      } else {
        sentence[i] = std::tolower(sentence[i]);
      }
    }
    printf("%s", sentence);
  }

  return 0;
}
