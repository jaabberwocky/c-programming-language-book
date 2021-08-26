#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int main(void)
{
    int c;
    int len;
    int i;
    char line[MAXLINE];

    len = 0;
    while ((c = getchar()) != EOF)
    {
        line[len] = c;
        ++len;
        if (c == '\n')
        {
            if (len > 80)
            {
                for (i = 0; i < len; i++)
                {
                    putchar(line[i]);
                }
            }
            // reset to initial
            len = 0;
            memset(line, 0, MAXLINE);
        }
    }
}