#include <stdio.h>

int main() {
    char current, prev;

    current = getchar();
    while (current != EOF) {
        if (current != ' ' || prev != ' ') {
            putchar(current);
        }
        prev = current;
        current = getchar();
    }
}