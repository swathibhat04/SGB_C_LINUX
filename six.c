// Program: Count 1, 2, 3... letter words
// Author: Swathi Bhat

#include <stdio.h>

int main() {
    char ch;
    int length = 0, word_lengths[100] = {0};

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (length > 0) {
                word_lengths[length]++;
                length = 0;
            }
        } else {
            length++;
        }
    }

    if (length > 0) word_lengths[length]++;

    for (int i = 1; i < 100; i++) {
        if (word_lengths[i] > 0) {
            printf("%d letter word(s): %d\n", i, word_lengths[i]);
        }
    }

    return 0;
}

