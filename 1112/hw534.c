#include <stdio.h>
#include <stdlib.h>



double rPower(double num1,double num2);

int main(void)
{
    double a,b,ans;
    printf("Enter base and exponent:");
    scanf("%lf %lf",&a,&b);
    ans=rPower(a,b);
    printf("%.2f to the power of %.2f is %.2f",a,b,ans);
}
double rPower(double num1,double num2)
{
   if(num2==0)
   {
    return 1;
   }
   else
   {
    return num1*rPower(num1,num2-1);
   }
}
