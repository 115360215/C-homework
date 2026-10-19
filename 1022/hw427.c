#include <stdio.h>
#include<math.h>


int main() {
    int limit=500;


    for(int a=1;a<=limit;a++)
    {
        for(int b=1;b<=limit;b++)
        {
            for (int c=1; c<=limit; c++)
            {
                if(pow(a,2)+pow(b,2)==pow(c,2))
                {
                    printf("a = %3d, b = %3d, c = %3d\n", a, b, c);
                }
            }
            
        }
    }
    
    return 0;
}