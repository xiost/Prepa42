#include <stdio.h>
#include <stdlib.h>

void    ft_is_negative(int n);

int main()
{
    ft_is_negative(-1500);
    return 0;
}
void ft_is_negative(int n)
{
    if(n > 0)
    {
        ft_putchar('P');
    }
    else
        ft_putchar('N');
    return 0;
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
