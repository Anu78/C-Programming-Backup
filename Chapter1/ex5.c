/*The goal of this excersise was to make the same table in reverse order, from 300 to 0*/
#include <stdio.h>

int main() {
    float fahr=300,celsius=0;
    for(; fahr <= 0; fahr-=20) {
        celsius = (fahr-32)*5/9;
        printf("%3.0f %6.1f\n", fahr,celsius);
    }
}