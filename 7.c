#include <stdio.h>
#include <string.h>

int main() {
    const char secret[] = "nu2026";
    char code[50];
    int len;

    printf("Enter code: ");
    fgets(code, sizeof(code), stdin);
    
    len = strlen(code);

    if(code[len - 1] == '\n')
    {
        code[len - 1] = '\0';
    }

    if (strcmp(code, secret) == 0)
    {
        printf("Access granted\n");
    }
    else
    {
        printf("Access denied\n");
    }

    if (strncmp(code, "nu", 2) == 0)
    {
        printf("Code starts with nu? Yes\n");
    } 
    else
    {
        printf("Code starts with nu? No\n");
    }

}