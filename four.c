// Program: Count characters from input using redirection
// Author: Swathi Bhat

#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    while ((ch = getchar()) != EOF) {
        count++;
    }
    printf("Total characters: %d\n", count);
    return 0;
}

