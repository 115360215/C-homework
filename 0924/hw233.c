#include <stdio.h>

int main() {
    float TtMiles;
    printf("Enter total miles driven per day: ");
    scanf("%f", &TtMiles);

    float GasoPG;
    printf("Enter cost per gallon of gasoline: ");
    scanf("%f", &GasoPG);

    float AvMiPeGa;
    printf("Enter average miles per gallon: ");
    scanf("%f", &AvMiPeGa);
    
    float ParkFee;
    printf("Enter parking fee per day: ");
    scanf("%f", &ParkFee);
    
    float tolsPD;
  
    printf("Enter tolls per day: ");
    scanf("%f", &tolsPD);

    
    float dailyCost = (TtMiles / AvMiPeGa) * GasoPG + ParkFee + tolsPD;

    
    printf("\nYour daily driving cost is $%.2f\n", dailyCost);
    
    return 0;
}