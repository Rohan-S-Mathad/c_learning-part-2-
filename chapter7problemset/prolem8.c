#include <stdio.h>

int main()
{
    int arr[10][3];
    int a[3] ;
    for (int t = 0; t < 3; t++)
    {
        printf("enter number");
        if (scanf("%d",&a[t])!=1){
        printf("enter the correct value");
        return 1 ;
        }
    }
    
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