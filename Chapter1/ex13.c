/* Write a program to print a histogram of the lengths of words in its input.*/
#include <stdio.h>
#define IN 1
#define OUT 0
int main(int argv, char argc[])
{
    int c,nl,nw,nc,state;
    state = OUT;
    nl=nw=nc=0;
    while((c=getchar()) != EOF) {
        ++nc;
        if(c=='\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;

        else if(state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%s%d\n","Words: ",nw);
}

