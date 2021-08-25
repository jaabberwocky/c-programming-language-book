#include <stdio.h>

int main()
{
    int char_count[128] = { 0 };
    int c, i;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            break;
        }
        char_count[c] = char_count[c] + 1;
    }

    for (i = 0; i < 128; i++)
    {
        if (char_count[i] > 0)
        {
            putchar((char)i);
            putchar(':');
            printf(" %d",char_count[i]);
            putchar('\n');
        }
        else
        {
            continue;
        }
    }
}