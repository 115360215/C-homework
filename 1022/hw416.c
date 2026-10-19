#include <stdio.h>
#include <math.h>


int main()
{
    //A
    for(int i=0;i<=9;i++)
    {   
        for(int j=0;j<=i;j++)
        {
           printf("*");
        }
        printf("\n");
    }

    printf("\n");
    //B
    for(int i=0;i<=9;i++)
    {   
        for(int j=9;j>=i;j--)
        {
           printf("*");
        }
        printf("\n");
    }

    printf("\n");
    //C
    for(int i=0;i<=9;i++)
    {   
        for(int j=0;j<=i;j++)
        {  
            if(j>0)
           {
            printf(" ");
           }
           
        }

        for(int k=9;k>=i;k--)
        {
            printf("*");
        }
        
        printf("\n");
    }

    printf("\n");
    //D
    for(int i=0;i<=9;i++)
    {   
        
        for(int j=9;j>=i;j--)
        {  
            if(j<=9)
           {
            printf(" ");
           }
           
        }
        for(int k=0;k<=i;k++)
        {
            printf("*");
        }
        
        
        printf("\n");
    }
    return 0;
}