void    ft_print_comb(void)
{
    char a = '0';
    char b = '0';
    char c = '0';
    while(a <= '7')
    {
        b = a + 1;
        while(b <= '8')
        {
            c = b + 1;
            while(c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (a != '7' || b != '8' || c != '9')
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                c++;
            }
            b++;
        }
        a++;

    }
}
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
