#include <unistd.h>

void    alpha_mirror(char *c)
{
    while (*c)
    {
        if (c[i] >= 65 && c[i] <= 90)
            *c = 90 - (*c - 65);
        else if (c[i] >= 97 && c[i] <= 122)
            *c = 122 - (*c - 97);
        write (1, &c[i], 1);
        c++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write (1, "\n", 1);
}
