#include <stdio.h>

int main( ) {

  const int SIZE = 5;
  int number[SIZE] = {100, 101, 102, 103, 104};

  for (int i=0; i<SIZE; i++) {
    printf("number[%d] = %d\n", i, number[i]);
  }

  return 0;
}
