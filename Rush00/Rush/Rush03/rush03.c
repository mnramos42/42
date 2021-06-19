void	ft_putchar(char c);
void	rush(int x, int y)
{
	int	col;
	int	lin;

	col = x;
	lin = y;
	while (lin >= 1)
	{
		ft_putchar ('A');
		col--;
		while (col > 1)
		{
			ft_putchar ('B');
			col--;
		}
		if (col == 1)
		{
			ft_putchar ('C');
		}
		ft_putchar ('\n');
		lin--;
		col = x;
		while (lin > 1)
		{
			ft_putchar ('B');
			col--;
			while (col > 1)
			{
				ft_putchar (' ');
				col--;
			}	
			if (col == 1 )
			{
				ft_putchar ('B');
			}
			ft_putchar ('\n');
			lin--;
			col = x;
		}	
		col = x;
		if (lin == 1)
		{
			ft_putchar ('A');
			col--;
			while (col > 1)
			{
				ft_putchar ('B');
				col--;
			}
			if (col == 1)
			{
				ft_putchar ('C');
			}
			ft_putchar ('\n');
			lin--;
		}
	}
}
