#include <stdio.h>

char pattern(int n);

int main ()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    pattern(rows);
}
// n = number of rows
char pattern(int n)
{
    int i, j;

    //loop that handles the rows
    for (i = 0; i < n; i++)
    {
        //loop that handles the columns
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}