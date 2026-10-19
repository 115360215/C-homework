#include <stdio.h>
#include <math.h>


int main()
{
    float SalesinDollars;
    
    printf("Enter sales in dollars(-1 to end): ");
    scanf("%f",&SalesinDollars);

    while (SalesinDollars != -1)
    {
    float salary;
    salary=200 + SalesinDollars*0.09;
    printf("Salary is: %.2f\n",salary);

    printf("\nEnter sales in dollars(-1 to end): ");
    scanf("%f",&SalesinDollars);
    }
    return 0;
}