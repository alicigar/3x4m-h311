#include <unistd.h>

void    search_and_replace(char *s, char old, char new)
{
    while(*s)
    {
        if (*s == old)
            *s = new;
        write (1, s, 1);
        s++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 4 & !argv[2][1] && !argv[3][1])
            search_and_replace(argv[1], argv[2][0], argv[3][0]);
    else
            write (1, "\n", 1);
    return (0);
}