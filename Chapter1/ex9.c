/*Copy input to output, replacing one or more blanks with one blank*/

#include <stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            putchar(c);
            while((c = getchar()) == ' ')
                {}
        }
        if(c != EOF)
            putchar(c);
    }
}
