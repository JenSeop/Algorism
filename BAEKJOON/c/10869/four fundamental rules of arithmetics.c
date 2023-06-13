#include <stdio.h>

int a_plus_b(int a, int b)
{
  return (a+b);
}

int a_minus_b(int a, int b)
{
  return (a-b);
}

int a_mul_b(int a, int b)
{
  return (a*b);
}

int a_div_b(int a, int b)
{
  return (a/b);
}

int a_rem_b(int a, int b)
{
  return (a%b);
}

int error_check(int a, int b)
{
  if((a > 0 && a <= 10000) && (b > 0 && b <= 10000))
    return (0);
  else
    return (1);
}

int main(void)
{
  int a = 4, b = 0;

  while(error_check(a,b))
    scanf("%d %d", &a, &b);
  printf("%d\n%d\n%d\n%d\n%d\n",a_plus_b(a,b),a_minus_b(a,b),a_mul_b(a,b),a_div_b(a,b),a_rem_b(a,b));
  return (0);
}