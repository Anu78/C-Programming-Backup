#include <stdio.h>

int main() {
    float fahr=0,celsius=0;
    for(fahr; fahr <= 300; fahr+=20) {
        celsius = (fahr-32)*5/9;
        printf("%3.0f %6.1f\n", fahr,celsius);
    }
}


