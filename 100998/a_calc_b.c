#include <stdio.h>

int calc(int a, int b)
{
  return (a*b);
}

int main(void)
{
  int a = 2, b = 3;

  //scanf("%d %d",a,b);
  printf("%d\n",calc(a,b));
  return (0);
}