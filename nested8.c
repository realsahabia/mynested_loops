#include <stdio.h>
/*
A 
A B 
A B C 
A B C D 
A B C D E
*/
int main(void)
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%c ", j+64);
        }
        printf("\n");
    }
}
