#include <stdio.h>
#define SIZE 15


int binarySearch(const int b[], int low, int high, int searchKey);

int main()
{
    int a[SIZE];

    for(int i=0 ;i<SIZE;i++)
    {
        a[i]=2*i;
    }

    printf("Enter a number between 0 and 28: ");
    int key;
    scanf("%d", &key);

    int result=binarySearch(a,0,SIZE -1,key);

    if (result != -1)
    {
        printf("\n%d found at subscript %d\n", key, result);
    } 
    else 
    {
        printf("\n%d not found\n", key);
    }

}

int binarySearch(const int b[], int low, int high, int searchKey)
{
    if(low>high)
    {
        return -1;
    }

    int mid=low +(high-low)/2;

    if(searchKey ==b[mid])
    {
        return mid;
    }

    else if(searchKey<b[mid])
    {
        return binarySearch(b,low,mid-1,searchKey);
    }
    else if (searchKey>b[mid])
    {
        return binarySearch(b,mid +1,high,searchKey);
    }
    
}
