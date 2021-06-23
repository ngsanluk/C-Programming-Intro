#include <stdio.h>

int total;
int n1;
int n2;

int get_total(int n1, int n2);

int main( ) {
  int n1 = 100;
  int n2 = 1000;
  printf("total = %d \n", total);
  printf("%d + %d = %d\n", n1, n2, get_total(n1, n2)); // in this line, total is not changed
  printf("total = %d \n", total);
  total = get_total(n1, n2);
  printf("%d + %d = %d\n", n1, n2, total);
  printf("total = %d \n", total);
  return 0;
}

int get_total(int n1, int n2) {
  int total;
  total = n1 + n2;
  return total;
}
