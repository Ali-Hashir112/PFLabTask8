#include <stdio.h>

int main()
{
    int age = 20;
    int *p = &age;

    printf("%d %d\n" , age , *p);
    *p += 1;
    printf("%d" , age);
}