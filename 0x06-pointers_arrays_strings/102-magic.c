#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * Write the line of your line of code here...
   * Remember:This Points 
   * - you are not Allowed to use a
   * - you are not Allowed to modify p
   * - only one Statement
   * - you are not Allowed to Code Anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
