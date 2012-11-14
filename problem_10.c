#include <stdio.h>
#include <stdbool.h>

#define MAX_NUM 2000000

bool is_prime(int value);

int main(void)
{
  long long int sum = 0;
  int i;

  for (i=2; i<=MAX_NUM; i++) {
    if (is_prime(i)) {
      printf("%d is prime !!\n", i);
      sum += i;
    }
  }

  printf("sum = %lld\n", sum);

  return 0;
}

bool is_prime(int value)
{
  int i;
  bool is_prime = true;

  if (value == 2 || value == 3) {
    return true;
  }

  for (i=2; i*i<=value; i++) {
    if (value % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
