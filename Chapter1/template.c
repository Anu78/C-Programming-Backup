#include <stdio.h>
#include <time.h>
int main(int argv, char argc[])
{
    clock_t begin = clock();





    clock_t end = clock();
    double elapsed_time = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%s%2.7f\n","Program execution time: ",elapsed_time);
}
