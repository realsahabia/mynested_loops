#include <stdio.h>
// Same ABDCD on each row pattern
int main(void)
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
}
