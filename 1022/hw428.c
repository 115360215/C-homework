#include <stdio.h>

int main(void) {
    int paycode;

    
    while (1) {
        printf("Enter employee pay code (1-4, or 0 to exit): ");
        if (scanf("%d", &paycode) != 1 || paycode <= 0) {
            break;
        }

        double weeklypay = 0.0;

        
        switch (paycode) {
            case 1: 
            { 
                double salary;
                printf("Enter manager's fixed weekly salary: ");
                scanf("%lf", &salary);
                weeklypay = salary;
                break;
            }
            case 2: 
            { 
                double wage, hours;
                printf("Enter hourly wage: ");
                scanf("%lf", &wage);
                printf("Enter total hours worked: ");
                scanf("%lf", &hours);
                
                if (hours <= 40) 
                {
                    weeklypay = wage * hours;
                } 
                else 
                {
                    weeklypay = (wage * 40.0) + (wage * 1.5 * (hours - 40.0));
                }
                break;
            }
            case 3: 
            { 
                double sales;
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                weeklypay = 250.0 + (sales * 0.057);
                break;
            }
            case 4: 
            { 
                double wage;
                int items;
                printf("Enter fixed amount per item: ");
                scanf("%lf", &wage);
                printf("Enter total number of items produced: ");
                scanf("%d", &items);
                weeklypay = wage * items;
                break;
            }
            
        }

        printf("Weekly pay: $%.2f\n", weeklypay);
    }

    return 0;
}