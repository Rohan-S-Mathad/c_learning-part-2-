#include <stdio.h>

int main()
{
    int arr[10][3];
    int a[3] = {2, 7, 9};
    for (int i = 0; i < 3; i++)

    {
        for (int j = 0; j < 10; j++)
        {
            arr[j][i] = j + 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", a[j] * arr[i][j]); // formatted to align neatly
        }
        printf("\n"); // new line after each row
    }

    return 0;
}