// Program: Character-by-character copy from input to output using redirection
// Author: Swathi Bhat

#include <stdio.h>

int main() {
    char ch;
    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}

