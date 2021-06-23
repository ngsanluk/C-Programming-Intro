#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int j;

    printf( "\nvalue of i = ");
    scanf("%d", &i);
    printf( "value of j = ");
    scanf("%d", &j);

    printf("i + j = %d\n", (i+j));
    printf("i - j = %d\n", (i-j));
    printf("i * j = %d\n", (i*j));
    printf("i / j = %d\n", (i/j));
    printf("i / j = %f\n", ((float)i/(float)j));
    printf("i %% j = %d\n", (i%j));
    printf("i++ = %d\n", i++);
    printf("++i = %d\n", ++i);
    printf("j-- = %d\n", j--);
    printf("--j-- = %d\n", --j);
    return 0;
}
