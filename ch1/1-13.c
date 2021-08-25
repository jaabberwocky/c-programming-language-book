#include <stdio.h>

int main()
{
    int c, word_length, i;

    word_length = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            for (i = 0; i < word_length; i++)
            {
                putchar('=');
            }
            putchar('\n');
            word_length = 0;
        }
        else
        {
            word_length += 1;
        }
    }
}