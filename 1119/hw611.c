#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{

    int a[SIZE] = {26, 5, 81, 7, 63, 12, 45, 33, 90, 15};
    int i, j, tmp;
    int swapped;

    printf("Original array:\n");
    for (j = 0; j < SIZE; j++) {
        printf("%4d", a[j]);
    }
    printf("\n\n");

    for (i = 0; i < SIZE - 1; i++)
    {
        swapped = 0;


        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                
                swapped = 1;
            }
        }


        printf("Loop %d : ", i);
        for (j = 0; j < SIZE; j++) {
            printf("%4d", a[j]);
        }
        printf("\n");


        if (swapped == 0)
        {
            printf("\nNo swaps made in this pass. Array is already sorted. Terminating early.\n");
            break;
        }
    }

    system("pause");
    return 0;
}