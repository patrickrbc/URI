#include <cstdio>
#include <cstring>

int main()
{
  int n, i, lenFirst, lenSecond;
  char first[1001], second[1001];
  scanf("%d", &n);

  while (n--)
  {
    scanf("%s %s", first, second);

    lenFirst = strlen(first);
    lenSecond = strlen(second);

    if (lenSecond > lenFirst)
    {
      printf("nao encaixa\n");
    }
    else
    {
      for (i = 0; i < lenSecond; i++)
      {
        if (first[lenFirst - lenSecond + i] != second[i])
        {
          printf("nao encaixa\n");
          break;
        }
        else if (i == lenSecond - 1)
        {
          printf("encaixa\n");
        }
      }
    }
  }

  return 0;
}
