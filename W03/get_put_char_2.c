#include <stdio.h>
int main() {
    int c = 0;
    while (1) {
      printf("\nPlease enter: ");
      c = getchar();
      printf("\nYou've entered: ");
      putchar(c);
      if (c==65) {
            break;
      }
    }
    putchar('\n');
    return 0;
}
