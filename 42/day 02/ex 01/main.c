void ft_print_reverse_alphabet(void)
{
    char lettre = '{';

    while(lettre != 'a')
    {
        lettre--;
        ft_putchar(lettre);
    }
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
