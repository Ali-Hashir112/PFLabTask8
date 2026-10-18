#include <stdio.h>

int main()
{
    float sales[3][5], current , temp, totalBranch[3], totalProduct[5];
    int highest, lowest;

    for(int i = 0; i < 3 ; i++)
    {
        temp  = 0;
        for (int j = 0; j < 5 ; j++)
        {
            printf("Enter sales for product %d at branch %d: " , j+1 , i+1);
            scanf("%g" , &current);
            sales[i][j] = current;
            temp += current;
        }
        totalBranch[i] = temp;
        if(i == 0)
        {
            highest = 0;
        }
        else if(totalBranch[highest] < totalBranch[i])
        {
            highest = i;
        }
    }

    for (int i = 0 ; i < 5 ; i++)
    {
        temp = 0;
        for (int j = 0 ; j < 3 ; j++)
        {
            temp += sales[j][i];
        }

        totalProduct[i] = temp;
        if (i == 0)
        {
            lowest = 0;
        }
        else if(totalProduct[lowest] > totalProduct[i])
        {
            lowest = i;
        }        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Total of branch %d: %g\n" , i+1 , totalBranch[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Total of Product %d: %g\n" , i+1 , totalProduct[i]);
    }

    printf("Branch with highest sales was branch %d\n" , highest);
    printf("Product with lowest sales was product %d" , lowest);
    
    return 0;
}