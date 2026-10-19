#include <stdio.h>
#include <math.h>


int main()
{
    int length,breadth;
    scanf("%d",&length);
    scanf("%d",&breadth);
    for(int L=length;L > 0;L--)
    {
        for(int B=breadth;B > 0;B--)
        {
            if(L==length||L==1||B==breadth||B==1)
            {
                printf("+");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}