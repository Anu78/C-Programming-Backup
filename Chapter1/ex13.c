/* Write a program to print a histogram of the lengths of words in its input.*/
#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX_LENGTH 15
int main()
{
    int array[50] = {};
    int c,char_count=0,i,arrayPosition=0,j;

    while((c=getchar()) != EOF) {
        ++char_count;
        if(c == ' ' || c == '\t' || c == '\n') {
            array[arrayPosition] = char_count-1;
            char_count=0;
            arrayPosition++;
        }
    }
    for(int j=0; j < arrayPosition; j++) {
        printf("%d\n",array[j]);
    }
//Print Histogram
    printf(" length | graph\n");
    for (i = 0; i <= MAX_LENGTH; ++i) {
        if (i != MAX_LENGTH)
            printf("     %2d | ", i + 1);
        else
            printf("    >%2d | ", MAX_LENGTH);
        for (j = 0; j < array[i]; ++j)
            putchar('+');
        putchar('\n');
    }
}
