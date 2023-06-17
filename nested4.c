#include <stdio.h>
// Descending order 54321 values on each row pattern

int main(void)
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
