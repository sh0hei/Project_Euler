#include <stdio.h>
#include <stdbool.h>

#define TARGET_NUM 10001

bool is_prime(long long int value);

int main(void)
{
  int counter = 0;
  long long int i;

  for (i=2; ; i++) {
    if (is_prime(i)) {
      counter++;
      printf("%d's prime_number = %lld !!\n", counter, i);
      if (counter == TARGET_NUM)
        break;
    }
  }

  printf("prime_number = %lld\n", i);

  return 0;
}

bool is_prime(long long int value)
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
