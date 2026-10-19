#include <stdio.h>
#include <math.h>


int main()
{
    int aAN;
    float bBatbitm;
    float cToaicbtctm;
    float dToacattcatm;
    float eAcl;

    printf("Enter account number (-1 to end): ");
    scanf("%d",&aAN);

    while (aAN != -1)
    {
        printf("Enter beginning balance: ");
        scanf("%f",&bBatbitm);

        printf("Enter total charges: ");
        scanf("%f",&cToaicbtctm);

        printf("Enter total credits: ");
        scanf("%f",&dToacattcatm);

        printf("Enter credits limits: ");
        scanf("%f",&eAcl);

        float Newbalance=bBatbitm + cToaicbtctm - dToacattcatm;

        if (Newbalance > eAcl)
        {
            printf("Account:      %d\n", aAN);
            printf("Credit limit: %.2f\n", eAcl);
            printf("Balance:      %.2f\n", Newbalance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d",&aAN);
    }

    return 0;
}