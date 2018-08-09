/*Revise the main routine of the longest-line program
so it will correctly print the length of arbitrarily
long input lines, and as much as possible of the text.
*/
#include <stdio.h>

#define MAXLINE 1000

void copy1(char to[], char from[]);
int getline1(char line[], int maxline);

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max=0;
    while((len=getline1(line,MAXLINE)) > 0)
        if (len> max) {
            max = len;
            copy1(longest, line);
        }
    if (max> 0)
        printf("%s", longest);
    return 0;
}

int getline1(char s[], int lim)
{
    int c,i;

    for(i=0; i<lim-1 && (c=getchar()) !=EOF && c !='\n'; ++i)
        s[i] = c;
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy1(char to[],char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != 0)
        ++i;
}