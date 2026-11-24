#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   
    int num[13]={0};
    srand((unsigned int)time(NULL));

    for(int i=0 ;i<36000;i++)
    {
        int dice1 = 1+rand()%6;
        int dice2 = 1+rand()%6;
        int sum=dice1+dice2;
        num[sum]+=1;

    }
    for (int g = 2; g<= 12; g++) {
        printf("%2d\t%8d\n", g, num[g]);
    }
}