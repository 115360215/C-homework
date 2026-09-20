#include <stdio.h>

int main() {
    int a,b,c;
    
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    

    int max=a;

    if (b>max){
        max=b;
    }

    if(c>max){
        max=c;
    }

    int min=a;

    if(b<min){
        min=b;
    }

    if(c<min){
        min=c;
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    return 0;
}
