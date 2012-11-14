#include <stdio.h>
#include <stdbool.h>

#define TARGET_MIN 2520

bool is_divideable(int value);

int main(void)
{
  int target = TARGET_MIN;

  while (true) {
    if (is_divideable(target)) {
      break;
    }
    target += 20;
  }

  printf("target = %d\n", target);

  return 0;
}

bool is_divideable(int value)
{
  bool result = true;
  int i;

  for (i=20; i>=2; i--) {
    if ((value%i) != 0) {
      result = false;
      break;
    }
  }

  return result;
}
