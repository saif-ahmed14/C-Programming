#include <stdio.h>
int main ()
{
    int n, row, col;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n\n");

    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col=1; col<=row*2-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

      for (row=n-1; row>=1; row--)
    {
        for (col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for (col=1; col<=row*2-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch ();
}