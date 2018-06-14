/*The goal of this exercise was to verify that the expression getchar() != EOF = 0 or 1*/

#include <stdio.h>

int main()
{
    int c;
    c = getchar() !=EOF;
    printf("%d\n",c);


}
