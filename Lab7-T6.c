#include <stdio.h>

int main()
{
    char board[3][3], winner = '-';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter board : ");
            scanf(" %c", &board[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != '-' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            winner = board[i][0];
        }
        if (board[0][i] != '-' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            winner = board[0][i];
        }
    }

    if (board[1][1] != '-')
    {
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        {
            winner = board[1][1];
        }
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        {
            winner = board[1][1];
        }
    }

    if (winner == '-')
    {
        printf("Draw\n");
    }
    else
    {
        printf("Winner: %c\n", winner);
    }

}