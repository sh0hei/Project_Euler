#include <stdio.h>

int get_q(long long int value);

int main(void)
{
  long long int triangle = 0;
  long long int add = 1;

  int debug;

  while (1) {
    triangle += add;
    add++;

    debug = get_q(triangle);
    printf("triangle:%lld\tcount:%d\n", triangle, debug);

    if (get_q(triangle) > 500) {
      break;
    }
  }

  printf("triangle = %lld\n", triangle);

  return 0;
}

int get_q(long long int value)
{
  int count = 0;
  int i;

  if (value == 1) {
    return 1;
  }

  for (i=2; i*i<=value; i++) {
    if (value % i == 0) {
      count += 2;
    }
  }
  count += 2;

  return count;
}
