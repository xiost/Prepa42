int nbr;
char chaine[2];
int inf = 1;

int main()
{
    void    ft_putchar(char c);
    chaine[0] = '0';
    chaine[1] = '0';
    chaine[2] = '-';
    chaine[3] = '0';
    chaine[4] = '0';

        while(chaine[0] != '9')
        {
            chaine[4]++;


            if(chaine[4] == ':')
            {
                chaine[3] = chaine[3]+1;
                chaine[4] = '0';
            }

            if(chaine[3] == ':')
            {
                chaine[1] = chaine[1]+1;
                chaine[3] = '0';
            }


            if(chaine[1] == ':')
            {
                chaine[0] = chaine[0]+1;
                chaine[1] = '0';
            }



        ft_putchar(chaine [0]);
        ft_putchar(chaine [1]);
        ft_putchar(chaine [2]);
        ft_putchar(chaine [3]);
        ft_putchar(chaine [4]);
        ft_putchar('\n');
    }



}


void    ft_putchar(char c)
{
    write(1, &c, 1);
}
