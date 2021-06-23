#include <stdio.h>
#include "rectangle.h"

int i = 0; // global variable
int j = 0; // global variable

void scope_test();

int main( ) {
  printf("in main() function : i=%d\n", i);
  i = i + 1;
  printf("in main() function : i=%d\n", i);

  int j = 10; // local variable
  printf("in main() function : j=%d\n", j);
  j = j + 1;
  printf("in main() function : j=%d\n", j);

  scope_test();

  for (int i=1000; i<1010; i++) {
    int j = 1000;
    j = j + 1;
    printf("for loop : i=%d\n", i);
  }

  printf("in main() function : i=%d\n", i);
  i = i + 1;
  printf("in main() function : i=%d\n", i);
  printf("in main() function : j=%d\n", j);
  j = j + 1;
  printf("in main() function : j=%d\n", j);

  scope_test();

  return 0;
}

void scope_test() {
  printf("in scope_test() function : i=%d\n", i);
  i = i + 1;
  printf("in scope_test() function : i=%d\n", i);

  int j = 100; // local variable
  printf("in scope_test() function : j=%d\n", j);
  j = j + 1;
  printf("in scope_test() function : j=%d\n", j);
}
