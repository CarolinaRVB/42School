#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        nb = -nb;
        write(1, "-", 1);
    }
    if (nb > 9)
    {
	    ft_putnbr(nb / 10);
    }
    char c = nb % 10 + '0';
    write(1, &c, 1);
}
