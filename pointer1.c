#include <stdio.h>

void print(char *h)
{
  while(*h != '\0')
  {
    printf("hello: %c\n", *h);
    h++;
  }
}

int main(void)
{
  int a = 5;
  int *p = &a;
  char *hello = "Hello";
  print(hello);
  
  printf("p   (address) = %p ", p);
  printf("p   (value) = %i\n", *p);
  printf("int (size) = %li\n", sizeof(int));
}
