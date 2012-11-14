#include <stdio.h>

int fibonacci(int n);

int main(void)
{
  int i, j, sum = 0;

  for (i=1; ; i++) {
    j = fibonacci(i);
    if (j > 4000000) {
      break;
    } else {
      if (j%2 == 0) {
        sum+=j;
      }
    }
  }

  printf("sum = %d\n", sum);

  return 0;
}

int fibonacci(int n) {
  if (n == 1 || n == 2) {
    return 1;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
