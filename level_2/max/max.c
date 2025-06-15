int max(int *tab, unsigned int len)
{
    int max_val;
    unsigned int i = 0;
    
    if (len == 0)
        return 0;
    
    max_val = tab[0];
    while (i < len)
    {
        if (tab[i] > max_val)
            max_val = tab[i];
        i++;
    }
    return (max_val);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int s[] = {2, 7, 3, 9, 5};
	printf("%d\n", max(s, 5));
}*/
