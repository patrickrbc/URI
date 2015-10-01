#include <cstdio>
#include <cstring>

int main()
{
  char text[60];
  int i, openI, openB, aux;

  while (gets(text))
  {
    openI = openB = aux = 0;

    for (i = 0; i < strlen(text); i++)
    {
      if (text[i] == '_') {
        if (openI) {
          printf("</i>");
          openI = 0;
        } else {
          printf("<i>");
          openI = 1;
        }
      } else if (text[i] == '*') {
        if (openB) {
          printf("</b>");
          openB = 0;
        } else {
          printf("<b>");
          openB = 1;
        }
      } else {
        printf("%c", text[i]);
      }
    }
    printf("\n");
  }

  return 0;
}
