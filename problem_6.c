#include <stdio.h>

long long int squares_sum(int v);
long long int sums_square(int v);

#define TARGET_NUM 100

int main (void)
{
  long long int answer;
  answer = sums_square(TARGET_NUM) - squares_sum(TARGET_NUM);

  printf("answer:%lld\n", answer);

  return 0;
}

long long int squares_sum(int v)
{
  int i;
  long long int sum = 0;
  for (i=1; i<=v; i++) {
    sum += i*i;
  }

  return sum;
}

long long int sums_square(int v)
{
  int i;
  long long int sum = 0;
  for (i=1; i<=v; i++) {
    sum += i;
  }

  return sum*sum;
}
