#include <unistd.h>

void rot_13(char *str)
{
    while (*str)
    {
        if (*str >= 65 && *str <= 77)
            *str = *str + 13;
        else if(*str >= 78 && *str <= 90)
            *str = *str - 13;
        if (*str >= 97 && *str <= 109)
            *str = *str + 13;
        else if(*str >= 110 && *str <= 122)
            *str = *str - 13;
        write (1, str, 1);
        str++;
    }
    write (1, "\n", 1);
}
int main(int argc, char **argv)
{
    if (argc != 2)
        write(1, "\n", 1);
    else
        rot_13(argv[1]);
    return (0);
}