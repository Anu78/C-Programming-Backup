//Print all input lines longer than 80 characters
#include <stdio.h>

#define LARGESTLINE 1000
#define TARGETSIZE 80


int getline2(char line[], int lim);


int main(int argc, char const *argv[])
{
    int len;
    char line[LARGESTLINE];

    while(((len = getline2(line,LARGESTLINE)) > 0)) {
        if(len > TARGETSIZE) {
            printf("%s",line);
        }
    }
    return 0;
}

int getline2(char line[], int limit) {
    int c,i;

    for(i=0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i]=c;
    }
    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}
