#include <stdio.h>

int total;
int n1;
int n2;

void get_total(int n1, int n2, int * total);

int main( ) {
  int n1 = 100;
  int n2 = 1000;
  printf("total = %d \n", total);
  get_total(n1, n2, & total);
  printf("%d + %d = %d\n", n1, n2, total); // in this line, total is not changed
  printf("total = %d \n", total);
  return 0;
}

void get_total(int n1, int n2, int * total) {
  *total = n1 + n2;
}
