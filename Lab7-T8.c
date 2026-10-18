#include <stdio.h>

int main()
{
    int stock[3][4][5];
    int buildingTotal, shelfTotal;
    int maxShelf, max[2];

    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 5; k++)
            {
                printf("Building %d, shelf %d, slot %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &stock[i][j][k]);
            }
        }
    }

    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        buildingTotal = 0;

        for(int j = 0; j < 4; j++)
        {
            shelfTotal = 0;

            for(int k = 0; k < 5; k++)
            {
                shelfTotal += stock[i][j][k];
            }

            buildingTotal += shelfTotal;

            if(i == 0)
            {
                maxShelf = 0;
            }
            else if (shelfTotal > maxShelf)
            {
                maxShelf = shelfTotal;
                max[0] = i;
                max[1] = j;
            }
        }

        printf("Building %d total stock: %d\n", i + 1, buildingTotal);
    }

    printf("\nFullest shelf: building %d, shelf %d (%d items)\n", max[0] + 1, max[1] + 1, maxShelf);

    printf("\nSlots needing restock:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (stock[i][j][k] < 5)
                {
                    printf("building %d shelf %d slot %d needs restock \n", i + 1, j + 1, k + 1);
                }
            }
        }
    }

    return 0;
}