#include <stdio.h>

int main( ) {

  int salary = 1000;
  int salary2 = 5000;
  int * n;
  int ** m;
  n = &salary;
  printf("&salary =  %p (memory address)\n", &salary);
  printf("n =  %p (memory address)\n", n);
  printf("*n = %d\n", * n);

  *n = 2000;
  printf("\n\nn =  %p (memory address)\n", n);
  printf("&n =  %p (memory address)\n", &n);
  printf("*n = %d\n", * n);
  printf("salary = %d\n", salary);
  printf("salary2 = %d\n", salary2);

  n = &salary2;
  *n = 50000;
  printf("\n\nn =  %p (memory address)\n", n);
  printf("&n =  %p (memory address)\n", &n);
  printf("*n = %d\n", * n);
  printf("salary = %d\n", salary);
  printf("salary2 = %d\n", salary2);


  m = &n;
  *m = &salary;
  *n = 3000;
  printf("\n\nn =  %p (memory address)\n", n);
  printf("&n =  %p (memory address)\n", &n);
  printf("*n = %d\n", * n);
  printf("salary = %d\n", salary);
  printf("salary2 = %d\n", salary2);

  return 0;
}
