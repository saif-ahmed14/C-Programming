#include <stdio.h>
int main ()
{
    int n, row, column;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (row=1; row<=n; row++)
    {
        for(column = 1; column<=row; column++)
        {
            printf("%d\t", column);
        }
        printf("\n");
    }
    getch ();
}
