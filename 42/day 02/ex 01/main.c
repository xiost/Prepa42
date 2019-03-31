#include <stdio.h>
#include <stdlib.h>

void ft_print_reverse_alphabet(void);

int main(int argc, char *argv[])
{
   ft_print_reverse_alphabet();

}

void ft_print_reverse_alphabet(void)
{
    char lettre = '{';

    while(lettre != 'a')
    {
        lettre--;
        ft_putchar(lettre);
    }
    return 0;
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
