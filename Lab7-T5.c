#include <stdio.h>

int main()
{
    int rooms[4][6], vacancy[4], highest, temp, total, consecutive, start[4] = {0};

    for(int i = 0 ; i < 4 ; i++)
    {
        total = 6;
        consecutive = 0;

        for(int j = 0 ; j < 6 ; j++)
        {
            printf("Enter occupancy for floor %d room %d: " , i+1 , j+1);
            scanf("%d" , &temp);
            rooms[i][j] = temp;
            total -= temp;
            if(temp == 0)
            {
                consecutive++;
            }
            else
            {
                consecutive = 0;
            }
            if(consecutive == 3)
            {
                start[i] = j - 1;
            }
        }
        
        vacancy[i] = total;
        
        if(i == 0)
        {
            highest = 0;
        }
        else if(vacancy[highest] < vacancy[i])
        {
            highest = i;
        }
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        printf("Floor %d has %d vacant rooms \n" , i+1 , vacancy[i]);
        if(start[i] != 0)
        {
            printf("3 consecutive rooms found at floor %d starting at room %d\n" , i+1 , start[i]);
        }
    }

}