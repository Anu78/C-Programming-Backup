/*Write a program to print a histogram of the frequencies of different characters in its input*/
#include <stdio.h>
int main()
{
    int array[150],c,i,j;

    while((c = getchar()) != EOF) {
        for(i = 0; i < 150; ++i)
            array[i]=c;
    }
    for(j=0; j < 50; j++) {
        printf("%d\n", array[j]);
    }
}