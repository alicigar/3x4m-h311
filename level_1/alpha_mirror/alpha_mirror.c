#include <unistd.h>

void    alpha_mirror(char *c)
{
    while (*c)
    {
        if (*c >= 'A' && *c <= 'Z')
            *c = 90 - (*c - 65);
        else if (*c >= 'a' && *c <= 'z')
            *c = 122 - (*c - 97);
        write(1, c, 1);
        c++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write(1, "\n", 1);
}
