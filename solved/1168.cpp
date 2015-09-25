#include <cstdio>
#include <cstring>

int ledsNeeded (int num) {
  int ret = 0;
  switch (num) {
    case 0:
      ret = 6;
      break;
    case 1:
      ret = 2;
      break;
    case 2:
      ret = 5;
      break;
    case 3:
      ret = 5;
      break;
    case 4:
      ret = 4;
      break;
    case 5:
      ret = 5;
      break;
    case 6:
      ret = 6;
      break;
    case 7:
      ret = 3;
      break;
    case 8:
      ret = 7;
      break;
    case 9:
      ret = 6;
      break;
  }

  return ret;
}

int main () {
  int n, i, nLeds;
  char number[101];

  scanf("%d", &n);

  while (n--) {
    scanf("%s", number);

    nLeds = 0;
    for (i = 0; i < strlen(number); i++) {
      nLeds += ledsNeeded(number[i]-48);
    }

    printf("%d leds\n", nLeds);
  }

  return 0;
}
