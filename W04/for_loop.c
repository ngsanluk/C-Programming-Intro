#include <stdio.h>
int main( ) {

  for (int i=0; i<3; i++) {
    for (int j=0; j<5; j++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");
  for (int i=0; i<5; i++) {
    for (int j=0; j<3; j++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");
  for (int i=0; i<5; i++) {
    printf("*");
  }

  printf("\n");
  for (int i=0; i<5; i++) {
    printf("*");
    printf("\n");
  }




  return 0;
}
