#include <stdio.h>
/**
 * main - main entry point
 * Return: Always 0 success
*/

int main(void)
{
    // declare variables
    int i, j, k;
    
    //outer-loop/height of the pattern
    for (i = 1; i <= 5; i++)
    {
        //loop to print initial spaces in decreasing manner
        for (k = 5; k >= i; k--)
        {
            printf(" ");
        }
        //loop to print the values of each row
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}