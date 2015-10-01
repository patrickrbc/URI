#include <cstdio>
#include <cstring>
#include <algorithm>

int main()
{
  int n, i, firstLen, secondLen;
  char first[51], second[51];

  scanf("%d", &n);

  while (n--)
  {
    scanf("%s %s", first, second);
    firstLen = strlen(first);
    secondLen = strlen(second);

    for (i = 0; i < std::max(firstLen, secondLen); i++)
    {
      if (i < firstLen) {
        printf("%c", first[i]);
      }

      if (i < secondLen) {
        printf("%c", second[i]);
      }
    }
    printf("\n");
  }
  return 0;
}
