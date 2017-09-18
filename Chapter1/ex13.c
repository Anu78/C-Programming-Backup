/* Write a program to print a histogram of the lengths of words in its input.*/
#include <stdio.h>

#define MAX_LENGTH 15
#define IN_WORD 1
#define OUT_WORD 0

int main(void)
{
    int c, word_in_out;
    int word_length[MAX_LENGTH + 1];
    int l;
    int i, j;

    for (i = 0; i <= MAX_LENGTH; ++i)
        word_length[i] = 0;

    word_in_out = OUT_WORD;
    while (1) {
        c = getchar();
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (word_in_out == OUT_WORD) {
                l = 0;
                word_in_out = IN_WORD;
            }
            ++l;
        } else {
            if (word_in_out == IN_WORD) {
                if (l <= MAX_LENGTH)
                    ++word_length[l - 1];
                else
                    ++word_length[MAX_LENGTH];
                word_in_out = OUT_WORD;
            }
            if (c == EOF)
                break;
        }
    }

    printf(" length | graph\n");
    for (i = 0; i <= MAX_LENGTH; ++i) {
        if (i != MAX_LENGTH)
            printf("     %2d | ", i + 1);
        else
            printf("    >%2d | ", MAX_LENGTH);
        for (j = 0; j < word_length[i]; ++j)
            putchar('+');
        putchar('\n');
    }
    return 0;
}

