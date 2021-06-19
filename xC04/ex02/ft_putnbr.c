#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	v[10];
	int		count;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb == -2147483648)
		write (1, "2147483648", 10);
	count = 0;
	while (nb > 0)
	{
		v[count] = ((nb % 10) + '0');
		nb = nb / 10;
		count++;
	}
	while (--count >= 0)
	{
		ft_putchar(v[count]);
	}
}
