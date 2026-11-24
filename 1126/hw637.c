#include <stdio.h>

int recursiveMaximum(const int array[], int size);

int main(void) {
    int a[] = {1, 23, 44, 51, 3, 5, 56, 67};
    int size = sizeof(a) / sizeof(a[0]);

    int maxVal = recursiveMaximum(a, size);
    printf("Maximum value is %d\n", maxVal);

    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    if (size == 1) {
        return array[0];
    }

    int max = recursiveMaximum(array, size - 1);

    if (array[size - 1] > max) 
    {
        return array[size - 1];
    } 
    else 
    {
        return max;
    }
}