#include <stdio.h>

void count_up(int n)
{
  for (int i = 1; i <= n; i++)
  {
    printf("%i ", i);
  }
  printf("\n");
}

int main()
{
  count_up(10);
  return 0;
}
