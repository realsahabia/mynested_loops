#include <stdio.h>
// same 12345 values on each row

int main(void)
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
