#include <cstdio>
#include <cstring>

char *removeChar (char *arr, char d) {
  int i;

  // remove digits
  for (i = 0; i < strlen(arr); i++) {
    if (arr[i]-48 == d) {
      if (strlen(arr) == 1) {
        arr[0] = '0';
      } else {
        memmove(&arr[i], &arr[i+1], strlen(arr)-i);
        i = -1;
      }
    }
  }

  // clean left zeros
  for (i = 0; i < strlen(arr); i++) {
    if (arr[i] >= '1' && arr[i] <= '9')
      break;

    if (strlen(arr) == 0) {
      arr[0] = '0';
    } else if (arr[i+1] != '\0') {
      memmove(&arr[i], &arr[i+1], strlen(arr)-i);
      i = -1;
    }
  }

  return arr;
}

int main () {

  int d = 1, i;
  char *n = new char [1001];

  while (!(d == 0 && n[0] == '0')) {
    scanf("%d %s", &d, n);

    if (d != 0 && n[0] != '0') {
      n = removeChar(n, d);
      printf("%s\n", n);
    }
  }
 
  return 0;
}
