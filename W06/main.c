#include <stdio.h>
#include "rectangle.h"

int main( ) {
  printf("\n1x1 rectangle\n");
  draw_rectagle(1, 1);
  printf("\n2x2 rectangle\n");
  draw_rectagle(2, 2);
  printf("\n3x3 rectangle\n");
  draw_rectagle(3, 3);
  printf("\n5x3 rectangle\n");
  draw_rectagle(5, 3);
  printf("\n3x5 rectangle\n");
  draw_rectagle(3, 5);
  printf("\n5x5 rectangle\n");
  draw_rectagle(5, 5);
  printf("\n5x0 rectangle\n");
  draw_rectagle(5, 0);
  printf("\n0x5 rectangle\n");
  draw_rectagle(0, 5);
  printf("\n0x5 rectangle\n");

  return 0;
}
