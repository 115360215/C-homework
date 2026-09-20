#include <stdio.h>

int main() {
    float WeiInKG,HeiInM;
    float BMI=0;

    printf("Enter your weight in kg(ex 67)\n");
    scanf("%f",&WeiInKG);
    printf("Enter your height in meter (ex 1.72)\n");
    scanf("%f",&HeiInM);

    BMI=WeiInKG/(HeiInM*HeiInM);

    printf("Your BMI is %.2f\n",BMI);

    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");



    
    return 0;
}