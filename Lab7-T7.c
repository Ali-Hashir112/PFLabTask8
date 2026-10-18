#include <stdio.h>

int main()
{
    float marks[3][4][5];
    float avg[3][4], deptAvg[3];
    float sum, deptTotal;
    int fail[3][4] = {0};
    int i, j, k;
    int topper;
    int bestDept = 0;

    for (i = 0; i < 3; i++)
    {
        deptTotal = 0;

        for (j = 0; j < 4; j++)
        {
            sum = 0;

            for (k = 0; k < 5; k++)
            {
                printf("Dept %d, student %d, subject %d: ", i + 1, j + 1, k + 1);
                scanf("%f", &marks[i][j][k]);

                sum += marks[i][j][k];
                if (marks[i][j][k] < 40)
                {
                    fail[i][j] = 1;
                }
            }

            avg[i][j] = sum / 5;
            deptTotal += sum;
        }

        deptAvg[i] = deptTotal / 20;

        if (deptAvg[i] > deptAvg[bestDept])
        {
            bestDept = i;
        }
    }

    for (i = 0; i < 3; i++)
    {
        topper = 0;
        printf("\nDepartment %d\n", i + 1);

        for (j = 0; j < 4; j++)
        {
            printf("  Student %d: average %g", j + 1, avg[i][j]);
            if (fail[i][j])
            {
                printf("  FAIL");
            }
            printf("\n");

            if (avg[i][j] > avg[i][topper])
            {
                topper = j;
            }
        }

        printf("  Topper: student %d (%g)\n", topper + 1, avg[i][topper]);
        printf("  Department average: %g\n", deptAvg[i]);
    }

    printf("\nBest department: %d (average %g)\n", bestDept + 1, deptAvg[bestDept]);

    return 0;
}