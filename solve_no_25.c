//solve no.25
#include <stdio.h>

int main()
{

  int n;
  scanf("%d", &n);
  if (n == 1)
  {

    printf("Not prime");
    return 0;
  }
  if (n == 2)
  {

    printf("Prime");
    return 0;
  }
  for (int i = 1; i <= n; i++)
  {

    if (n % 2 == 0)
    {
      printf("Not Prime");
      return 0;
    }
  }

  printf("Prime");

  return 0;
}