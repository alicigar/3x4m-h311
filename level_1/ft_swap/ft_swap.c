void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*#include <stdio.h>

int main (void)
{
    int a = 2;
    int b = 6;
    ft_swap(&a, &b);
    printf ("%d\n", a);
    printf ("%d\n", b);
    return (0);
}*/