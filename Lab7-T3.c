#include <stdio.h>

int main()
{
    float temp[7][4], noonAverage, total, current;
    int coldest[2], hottest[2];
    total = 0;

    for(int i = 0 ; i < 7 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("Enter temperature for day %d hour %d: " , i+1 , j+1);
            scanf("%f" , &current);
            temp[i][j] = current;
            if(j == 1)
            {
                total += current;
            }
            if(i == 0 && j == 0)
            {
                hottest[0] = i;
                hottest[1] = j;
                coldest[0] = i;
                coldest[1] = j;
            }
            else 
            {
                if(current > temp[hottest[0]][hottest[1]])
                {
                    hottest[0] = i;
                    hottest[1] = j;
                }
                if(current < temp[coldest[0]][coldest[1]])
                {
                    coldest[0] = i;
                    coldest[1] = j;
                }
            }
            
        }
    }

    noonAverage = total/4;
    printf("Temperatures higher than average: ");

    for (int i = 0; i < 7; i++)
    {
        if(temp[i][1] > noonAverage)
        {
            printf("\n%g" , temp[i][1]);
        }
        
    }
    
}