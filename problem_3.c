#include <stdio.h>

void factor(long long value, long div);

int main(void)
{
  factor(600851475143LL, 2);
  return 0;
}

void factor(long long value, long div)
{
  if (value == 0 || value == 1) {
    printf("%lld\n", value);
  } else if (value % div == 0) {
    printf("%ld * ", div);
    factor(value / div, div);
  } else {
    factor(value, div + 1);
  }
}
