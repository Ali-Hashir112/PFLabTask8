#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50];
    char rollNo[20];
    char username[80]; 
    int len;

    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    
    len = strlen(firstName);

    if(firstName[len - 1] == '\n')
    {
        firstName[len - 1] = '\0';
    }

    printf("Enter your roll number: ");
    fgets(rollNo, sizeof(rollNo), stdin);

    len = strlen(rollNo);

    if(rollNo[len - 1] == '\n')
    {
        rollNo[len - 1] = '\0';
    }

    strcpy(username, firstName);
    strcat(username, "_");
    strcat(username, rollNo);

    printf("Username: %s\n", username);
    printf("Length: %d\n", strlen(username));

}