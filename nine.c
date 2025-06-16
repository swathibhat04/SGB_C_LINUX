// Program: Custom strcat() implementation
// Author: Swathi Bhat


#include <stdio.h>
#include <string.h>

void my_strcat(char *s1, char *s2) {
    while (*s1) s1++;
    while (*s2) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    my_strcat(str1, str2);

    printf("Concatenated: %s\n", str1);

    return 0;
}

