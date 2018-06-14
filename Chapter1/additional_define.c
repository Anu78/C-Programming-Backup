/*The goal of this was to use #define to make symbolic constants more readable and changeable.
The name part of #define has to be all caps
*/
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
int main() {
    float fahr=0,celsius=0;
    for(fahr=LOWER; fahr <= UPPER; fahr+=STEP) {
        celsius = (fahr-32)*5/9;
        printf("%3.0f %6.1f\n", fahr,celsius);
    }
}