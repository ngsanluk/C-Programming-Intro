#include <stdio.h>
int main( ) {

   char str[100];
   int i;

   printf( "Please enter:");
   scanf("%s %d", str, &i);

   printf( "\nYou've entered: %s %d ", str, i);

   return 0;
}
