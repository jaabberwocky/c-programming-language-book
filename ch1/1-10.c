#include <stdio.h>

int main() {
    char c;

    c = getchar();
    while (c != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else {
            putchar(c);
        }
        c = getchar();
    }
}