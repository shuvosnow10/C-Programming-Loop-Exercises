//solve no.23
#include <stdio.h>
int main()
{

  int n, rev = 0, palin;
  scanf("%d", &n);
  palin = n;

  while (n)
  {

    rev = rev * 10 + n % 10;
    n /= 10;
  }
  if (rev == palin)
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not Palindrome");
  }
}