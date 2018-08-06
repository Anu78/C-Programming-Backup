//rewrite the function from 1.2 to use a function to convert the temperatures
#include <stdio.h>

#define YES 0

int convert(int number, int choice)
{
    float final_value = 2.01;
    if(choice == 0) {
        final_value = (number - 32)*(5.0/9.0);
        printf("%4.2f",final_value);
    }
    else {
        final_value = number*1.8 + 32;
    }
    return final_value;
}

int main()
{
    printf("%d\n",convert(40,0));
}
