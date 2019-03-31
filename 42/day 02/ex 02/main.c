#include <stdio.h>
#include <stdlib.h>

void     ft_print_numbers(void);

int main(int argc, char *argv[])
{
   ft_print_numbers();
}

void    ft_print_numbers(void)
{
    char nbr = '0';

    while(nbr != ':')
    {
        ft_putchar(nbr);
        nbr++;
    }
    return 0;
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
