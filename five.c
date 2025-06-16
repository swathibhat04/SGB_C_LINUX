// Program: Print each word on a new line and count words
// Author: Swathi Bhat

#include <stdio.h>

int main() {
    char ch;
    int in_word = 0, word_count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (in_word) {
                putchar('\n');
                in_word = 0;
            }
        } else {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
            putchar(ch);
        }
    }

    printf("\nTotal words: %d\n", word_count);
    return 0;
}

