// Program: Read and print one line at a time
// Author: Swathi Bhat


#include <stdio.h>

int main() {
    char line[200];

    while (fgets(line, sizeof(line), stdin)) {
        printf("%s", line);
    }

    return 0;
}

