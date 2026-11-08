#include <stdio.h>
#include <string.h>

int main() {
    char subjects[5][50];
    int len;
    int longest = 0;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter subject %d: ", i + 1);
        fgets(subjects[i], sizeof(subjects[i]), stdin);

        len = strlen(subjects[i]);

        if(subjects[i][len - 1] == '\n')
        {
            subjects[i][len - 1] = '\0';
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d. %s\n", i + 1, subjects[i]);
    }

    for(int i = 1; i < 5; i++)
    {
        if(strlen(subjects[i]) > strlen(subjects[longest]))
        {
            longest = i;
        }
    }

    printf("Longest subject: %s\n", subjects[longest]);

}