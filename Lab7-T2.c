#include <stdio.h>

int main()
{
    int studentTotal, total[6], highest;
    float studentAverage[6], subjectAverage[4], marks[6][4], temp;

    for(int i = 0 ; i < 6 ; i++)
    {
        studentTotal = 0;
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("Enter Marks for Student %d Subject %d: " , i+1 , j+1);
            scanf("%f" , &temp);
            marks[i][j] = temp;
            studentTotal += temp;
        }

        total[i] = studentTotal;
        studentAverage[i] = studentTotal/4;
    }

    for(int i = 0; i < 6; i++)
    {
        printf("Student %d average: %g\n" , i+1, studentAverage[i]);
        printf("Student %d total: %d\n" , i+1, total[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        temp = 0;
        for(int j = 0 ; j < 6 ; j++)
        {
            temp += marks[j][i];
        }
        subjectAverage[i] = temp/6;
        if(i == 0)
        {
            highest = 0;
        }
        else if(subjectAverage[highest] < subjectAverage[i])
        {
            highest = i;
        }
    }

    for(int i = 0 ; i < 4 ; i++)
    {
        printf("Subject Average for subject %d is : %g\n" , i+1 , subjectAverage[i]);
    }

    printf("The highest average belonged to subject %d" , highest+1);
    
    
}