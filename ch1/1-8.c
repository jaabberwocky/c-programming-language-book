#include <stdio.h>

int main() {
    int count;
    char c;

    count = 0;
    while (getchar() != EOF) {
        c = getchar();
        if (c == ' ' || c == '\t' || c == '\n') {
            count++;
        }
    }
    printf("Count of tab, newline or blanks: %d\n", count);
}