                                                   
#include <stdio.h>
int integers[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
int size = sizeof(integers)/sizeof(integers[0])+1;
int term = 25;
int main() {
    printf("%d\n",binSearch(integers,term));
}


int binSearch(int array[],int term) {
    int max = size;
    int guessCount = 0;
    int min = 0;
    int guess = (min+max)/2;
    while(min <= max) {
        guessCount++;
        if(array[guess] == term) {
            return guess;
        }
        else if(array[guess] < term) {
            min = guess+1;
            guess = (min+max)/2;
        }
        else if(array[guess] > term) {
            max = guess-1;
            guess = (min+max)/2;
        }
    }


}
