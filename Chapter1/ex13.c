/* Write a program to print a histogram of the lengths of words in its input.*/
#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
    int array[50] = {};
    int c,char_count=0,i,arrayPosition=0;

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
    printf("\n");
    for(i=1; i<15; ++i) {
        printf("%d\n",i);
    }
    printf("%s\n","15+");
    return 0;
}
