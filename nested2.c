#include <stdio.h>
// Diferent value on rach row
int main(void)
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
