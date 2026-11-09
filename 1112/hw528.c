#include <stdio.h>
#include <stdlib.h>


char changeCase(char change);

int main(void)
{
    char testChar = 'Z';
    
    printf("Original character: %c\n", testChar);
    printf("Changed case: %c\n", changeCase(testChar));

    system("pause");
    return 0;
}


char changeCase(char change)
{
    if (change >= 'A' && change <= 'Z')
    {

        return change + ('a' - 'A');
    }
    else if (change >= 'a' && change <= 'z')
    {
       
        return change - ('a' - 'A');
    }

    return change;
}