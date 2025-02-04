#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void putnbr(int nb)
{
    if (nb > 9)
    {
        putnbr(nb / 10);
        putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

void fizzbuzz(void)
{
    int nb = 1;

    while(nb <= 100)
    {
        if(nb % 3 == 0 && nb % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if(nb % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if(nb % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            putnbr(nb);
        }
        write(1, "\n", 1);
        nb ++;
    }
}

int main(void)
{
    fizzbuzz();
    return 0;
}