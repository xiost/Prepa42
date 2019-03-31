void ft_print_alphabet(void)
{
    char lettre = '`';

    while(lettre != 'z')
    {
        lettre++;
        ft_putchar(lettre);
    }
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
