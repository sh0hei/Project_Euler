#include <stdio.h>
#include <stdbool.h>

bool is_pitaglas(int a, int b, int c);

int main(void)
{
  bool has_next = true;
  int a, b, c;

  for (a=1; a<=332 && has_next; a++) {
    for (b=2; b<=998; b++) {
      c = 1000-(a+b);
      if (is_pitaglas(a, b, c)) {
        has_next = false;
        break;
      }
    }
  }

  printf("a:%d b:%d c:%d\n", a-1, b, c);
  printf("answer:%d\n", (a-1)*b*c);

  return 0;
}

bool is_pitaglas(int a, int b, int c)
{
  if ((a*a + b*b) == c*c) {
    return true;
  } else {
    return false;
  }
}
