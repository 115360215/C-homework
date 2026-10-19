#include <stdio.h>
#include <math.h>


int main()
{
    int investment;
    int time;
    scanf("%d",&investment);
    scanf("%d",&time);
    for(float i=0.1;i<=0.121;i+=0.005)
    {
        float amount=investment*pow(1.0+i,time);
        printf("Principal = %.2f ",amount);
        printf("rate = %.2f %%\n",i*100);
    }
    


}