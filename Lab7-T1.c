#include <stdio.h>

int main()
{
    int seats[5][8] , temp , free[5] , freeTotal, rowTotal;
    char status[2] = {'.' , 'X'};
    freeTotal = 5 * 8;

    for(int i = 0 ; i < 5 ; i++)
    {
        rowTotal = 8;
        for(int j = 0 ; j < 8 ; j++)
        {
            printf("Enter status of row %d seat %d: " , i+1 , j+1);
            scanf("%d" , &temp);
            seats[i][j] = temp;
            freeTotal -= temp;
            rowTotal -= temp;
        }
        free[i] = rowTotal;
        printf("\n");
    }
    printf("Total free: %d" , freeTotal);
    printf("\nFree Per Row: ");
    for(int i = 0; i < 5; i++)
    {
        temp = free[i];
        printf("%d" , temp);
    }
    printf("\nSeating Plan: \n");
    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < 8 ; j++)
        {
            temp = seats[i][j];
            printf(" %c " , status[temp]);
        }
        printf("\n");
    }
    
    return 0;

}
