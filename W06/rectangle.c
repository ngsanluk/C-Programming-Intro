#include <stdio.h>
void draw_rectagle(int width, int height) {
  printf("Function Called\n");
  for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
      printf("*");
    }
    printf("\n");
  }
}
