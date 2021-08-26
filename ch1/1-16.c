#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

/* getline:  read a line into s, return length  */
int getlongestline(char s[], int lim)
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

/* print the longest input line */
int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE]; /* longest line saved here */
    /* current line length */
    /* maximum length seen so far */
    max = 0;
    while ((len = getlongestline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0 && max > 1000 && longest[MAXLINE - 1] != '\n')
    {
        // truncation happened
        printf("Longest line [%d chars] (trunc): %s", max, longest);
    }
    else if (max > 0)
    {
        printf("Longest line [%d chars]: %s", max, longest);
    }
    /* current input line */
    return 0;
}
