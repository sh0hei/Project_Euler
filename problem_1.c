#include <stdio.h>

#define MAX_NUM 1000

int main(void)
{
  int i, sum = 0;

  for (i=1; i<MAX_NUM; i++) {
    if (i%3==0 || i%5==0) {
      sum += i;
    }
  }

  printf("sum = %d\n", sum);

  return 0;
}
