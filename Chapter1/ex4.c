/*This excersize was to make the corresponding Celsius to Farenheight table*/

#include <stdio.h>

int main() {
    float fahr=0,celsius=0;
    for(celsius; celsius <= 300; celsius+=20) {
        fahr = (1.8 * celsius) + 32;
        printf("%3.0f %6.1f\n", celsius,fahr);
    }
}


