#include <stdio.h>

int main()
{
    int c,spaces=0,tabs=0,newlines=0;

    while((c=getchar()) != EOF) {
        if(c == ' ') {
            spaces++;
            continue;
        }
        if(c == 9) {
            tabs++;
            continue;
        }
        if(c == '\n') {
            newlines++;
        }
    }
    printf("\n%s%d\n%s%d\n%s%d\n","Spaces: ",spaces,"Tabs: ",tabs,"New lines: ",newlines);
    return 0;
}
