/* Write a program to print a histogram of the lengths of words in its input.*/
#include <stdio.h>
#define IN 1
#define OUT 0
int main(int argv, char argc[])
{
    int c,char_count,i;

    while((c=getchar()) != EOF) {
        ++char_count;
        if(c == ' ' || c == '\t' || c == '\n') {
            //printf("%d\n",char_count-1);
            char_count=0;
        }
    }
//Print Histogram
    printf("\n");
    for(i=1; i<15; ++i) {
        printf("%d\n",i);
    }
    printf("%s\n","15+");
    return 0;
}
