#include <stdio.h>

const char *pointer = "Hello World 2026";

int main()
{
    int count ,upper ,lower ,digit ,space;
    char current;

    current = *pointer;

    count = 0;
    upper = 0;
    lower = 0;
    digit = 0;
    space = 0;

    while (current != '\0')
    {
        if(current == 32)
        {
            space += 1;
        }
        else if(current <= 57 && current >= 48)
        {
            digit += 1;
        }
        else if(current <= 90 && current >= 65)
        {
            upper += 1;
        }
        else if(current <= 122 && current >= 97)
        {
            lower += 1;
        }
        count += 1;
        current = *(pointer + count);
    }

    printf("Uppercase: %d \nLowercase: %d \nDigits: %d \nSpaces: %d" , upper , lower , digit , space);
    
}