#include <stdio.h>

int main( ) {

  int * n;
  *n = 100;
  printf("n = %d\n", * n);
  printf("*n =  %p (memory address)\n", n);

  return 0;
}
