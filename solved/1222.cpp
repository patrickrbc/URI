#include <cstdio>
#include <cmath>
#include <cstring>

int main () {
  int charsPerLine, linesPerPage, nWords;
  float nChars, nLines, nPages;
  char c;
  char word[70];

  while (scanf("%d %d %d", &nWords, &linesPerPage, &charsPerLine) != EOF) {

    nChars = 0;
    nLines = 1;

    while (nWords--) {
      scanf("%s", word);

      // space before new word
      if (nChars > 0) nChars++;
      nChars += strlen(word);

      // exactly the line limit
      if (nChars == charsPerLine) {
        nChars = 0;
        if (nWords > 0)
          nLines++;
      }

      // exceed the line limit
      if (nChars > charsPerLine) {
        nChars = strlen(word);
        nLines++;
      }
    }

    nPages = std::ceil(nLines/linesPerPage);

    printf("%d\n", (int)nPages);
  }

  return 0;
}
