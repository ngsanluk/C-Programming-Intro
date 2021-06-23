#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age1 = 20;
    int age2 = 30;
    int age3 = 30;

    if (age1 == age2) {
        printf("student 1 is as old as student 2\n");
    }

    if (age2 == age3) {
        printf("student 2 is as old as student 3\n");
    }

    if (age2 > age1) {
        printf("student 2 is older than student 1\n");
    }

    if (age3>=age2) {
        printf("student 3 is same age or older than student 2\n");
    } else {
        printf("student 3 younger than student 2\n");
    }


    return 0;
}
