#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void)
{
  int x = 4;
  int y = 9;
  swap(&x, &y);
  printf("x=%d y=%d", x, y);
  return 0;
}