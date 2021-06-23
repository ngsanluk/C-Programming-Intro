#include <stdio.h>
#include <string.h>

int main( ) {

  // Array size is clearly said
  char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("greeting -> %s \n", greeting);

  // Array size is NOT said for better flexibility
  char greeting2[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
  printf("greeting -> %s \n", greeting2);

  // Use a string directly
  char greeting3[] = "Hello";
  printf("greeting -> %s \n", greeting3);

  for(int i=0; i<strlen(greeting3); i++) {
    printf("greeting[%d] = %c \n", i, greeting3[i]);
    printf(" @ 0x%p\n",&greeting3[i]);
  }

  return 0;
}
