#include <stdio.h>
#include <stdlib.h>


int LeastCommonMultiple(int num1,int num2);

int main(void)
{
    int a,b;
    
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    printf("The least common multiple of two integers is %d\n",LeastCommonMultiple(a,b));
    system("pause");
    return 0;
}

int LeastCommonMultiple(int num1,int num2)
{
    int max;
    if(num1>num2)
    {
        max=num1;
    }
    else
    {
        max=num2;
    }
    for(int i=max;;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            return i;
        }
    }
}