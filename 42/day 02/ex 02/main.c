void    ft_print_numbers(void)
{
    char nbr = '0';

    while(nbr != ':')
    {
        ft_putchar(nbr);
        nbr++;
    }
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
