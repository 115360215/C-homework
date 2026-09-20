#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(b==0)
    {
        printf("Divisor can not be 0");
    }
    else
    {
        if(a%b==0)
        {
            printf("%d is a multiple of the %d",a,b);
        }
        else
        {
            printf("%d is not a multiple of the %d",a,b);
        }
    }

    
    return 0;
}