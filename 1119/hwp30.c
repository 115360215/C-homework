#include <stdio.h>
#include <stdlib.h>

void inverse(int *b);

int main()
{
    int a[3]={3,5,7},i;
    for (i=0;i<3;i++)
        printf("%d ",a[i]);
    printf("\n");

    inverse(a);

    for (i=0;i<3;i++)
        printf("%d ",a[i]);
    printf("\n");

    system("pause");
    return 0;
}

void inverse(int *b)
{
    int tmp[3],i;
    for (i=0;i<3;i++)
        tmp[2-i]=b[i];
    for (i=0;i<3;i++)
        b[i]=tmp[i];
}

void modifyArray(int b[],int size)
{
    int j;
    for(j=0;j<size;j++)
    {
        b[j]*=2;
    }
}

void modifyElement(int e)
{
    printf("Value in modifyElement is %d\n",e*=2);
}