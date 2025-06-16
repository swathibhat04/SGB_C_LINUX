// Program: Print 10 numbers from input file using redirection
// Author: Swathi Bhat


#include <stdio.h>

int main() {
    int nums[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", nums[i]);
    }
    return 0;
}

