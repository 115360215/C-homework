#include <stdio.h>
#include <stdlib.h>


unsigned long long int fibonacci(unsigned int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    unsigned long long int prev2 = 0; 
    unsigned long long int prev1 = 1;
    unsigned long long int current = 0;

    for (unsigned int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main(void)
{

    printf("First 10 Fibonacci numbers:\n");
    for (unsigned int i = 0; i < 10; i++)
    {
        printf("F(%u) = %llu\n", i, fibonacci(i));
    }


 
    unsigned int n = 0;
    unsigned long long int prev = 0;
    unsigned long long int current = 0;

    while (1)
    {
        current = fibonacci(n);
        
        if (n >= 2 && current < prev)
        {
            printf("Overflow occurred at F(%u).\n", n);
            printf("The largest Fibonacci number that can be printed is:\n");
            printf("F(%u) = %llu\n", n - 1, prev);
            break;
        }
        
        prev = current;
        n++;
    }

    system("pause");
    return 0;
}