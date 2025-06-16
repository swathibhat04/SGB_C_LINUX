// Program: Print length of each input line
// Author: Swathi Bhat

#include <stdio.h>
#include <string.h>

int main() {
    char line[200];
    int line_number = 1;

    while (fgets(line, sizeof(line), stdin)) {
        printf("Length of line %d: %lu\n", line_number, strlen(line) - 1);
        line_number++;
    }

    return 0;
}

