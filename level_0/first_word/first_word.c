#include <unistd.h>

void first_word(char *str)
{
    int i = 0;
    while (str[i] == 9 || str[i] == 32)
        i++;
    while (str[i] && str[i] > 32)
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        first_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}
