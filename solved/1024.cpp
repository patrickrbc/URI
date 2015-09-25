#include <cstdio>
#include <cstring>

char* reverse (char* text) {

  int i;
  int len = strlen(text);
  char aux;
  char *start = text;
  char *end = text + (len-1);

  while (start < end) {
    aux = *start;
    *start = *end;
    *end = aux;
    start++;
    end--;
  }

  return text;
}

char* shiftRight (char* text) {
  
  int i, n;

  for (i = 0; i < strlen(text); i++) {
    n = static_cast<int>(text[i]);

    if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z')) {
      text[i] = static_cast<char>(n+3);
    }
  }
  return text;
}

char* shiftLeft (char* text) {
  int i, n;
  int len = strlen(text);

  for (i = len/2; i < len; i++) {
    n = static_cast<int>(text[i]);
    text[i] = static_cast<char>(n-1);
  }
  return text;
}

int main () {
  using namespace std;

  int n, i;
  char *text;

  scanf("%d", &n);

  while (n--) {
    text = new char[1001];
    scanf(" %1000[^\n]", text);

    text = shiftRight(text);
    text = reverse(text);
    text = shiftLeft(text);
    printf("%s\n", text);
    delete text;
  }

  return 0;
}
