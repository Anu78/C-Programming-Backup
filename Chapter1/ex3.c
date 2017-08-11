/*This excersize was to create headings for the table that the function generated*/

#include <stdio.h>

int main() {
    printf("%s\t%s\n","F","C");
    float fahr=0,celsius=0;
    for(; fahr <= 300; fahr+=20) {
        celsius = (fahr-32)*5/9;
        printf("%3.0f %6.1f\n", fahr,celsius);
    }
}


