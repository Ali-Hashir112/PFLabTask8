#include <stdio.h>

int main()
{
    char titles[5][50], temp;
    int copies[5], vowels[5], highest , total;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter Title of Book: ");
        scanf(" %[^\n]" , &titles[i]);
        printf("Enter number of copies: ");
        scanf("%d" , &copies[i]);
        printf("\n");

        if(i == 0)
        {
            highest = 0;
        }
        else if(copies[highest] < copies[i])
        {
            highest = i;
        } 
    }

    for(int i = 0; i < 5; i++)
    {
        total = 0;
        for(int j = 0 ; titles[i][j] != '\0' ; j++)
        {
            switch (titles[i][j])
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                total++;
            default:
                break;
            }
        }
        vowels[i] = total;
    }

    printf("%-12s" , "Book ID");
    printf("%s" , "Book Title");
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%-12d" , i);
        printf("%s\n" , titles[i]);

    }
    
    printf("Enter first letter: ");
    scanf(" %c" , &temp);
    
    for(int i = 0 ; i < 5 ; i++)
    {
        if (titles[i][0] == temp)
        {
            printf("%s\n" , titles[i]);
        }     
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("\nVowels in title %d: %d" , i + 1, vowels[i]);
    }

    printf("Most copies of : %s " , titles[highest]);
    
}