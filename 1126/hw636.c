#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char s[]);


int main(void)
{
    char array[]={'a','b','c','d','e','\0'};
    printf("%s\n",array);
    printf("reverse\n");

    stringReverse(array);


}

void stringReverse(const char s[])
{
    if (s[0]=='\0')
    {
        return;
        
    }
    stringReverse(s+1);
    printf("%c", s[0]);
}