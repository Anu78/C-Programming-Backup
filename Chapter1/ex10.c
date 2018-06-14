/*Copy input to output, replacing tab with \t, etc*/
#include <stdio.h>

int main()
{
    int c, found=0;

    while ((c=getchar()) != EOF) {
        found = 0;
        switch(c) {
        case '\\':
            putchar('\\');
            putchar('\\');
            found = 1;
            break;
        case '\t':
            putchar('\\');
            putchar('t');
            found = 1;
            break;
        case '\b':
            putchar('\\');
            putchar('b');
            found = 1;
            break;
        default:
            putchar(c);
            break;
        }
        return 0;
    }
}