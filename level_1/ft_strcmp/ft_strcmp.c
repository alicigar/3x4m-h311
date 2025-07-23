int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            break ;
        i++;
    }
    return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str1 = "Hellfqefeafa";
    char *str2 = "Helle";
    printf("%d\n", ft_strcmp(str1, str2));
    printf("%d\n", strcmp(str1, str2));
    return (0);
}*/
