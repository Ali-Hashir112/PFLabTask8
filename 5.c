#include <stdio.h>

int divide(int a, int b, int *result)
{
    if(result == NULL)
    {
        return -1;
    }
    else if(b == 0)
    {
        return -1;
    }
    else
    {
        *result = a/b;
        return 0;
    }
}

int main()
{
    int result;   

    printf("case 1 : %d\n" , divide(10 , 2 , &result)); // b not equal to 0 and result isnt a null pointer
    printf("case 2 : %d\n" , divide(10 , 2 , NULL)); // b not equal to 0 but result is a null pointer
    printf("case 3 : %d\n" , divide(10 , 0 , &result)); // b equal to zero but result isnt a null pointer
    printf("%d" , result);
}