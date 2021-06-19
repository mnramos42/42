//#include <stdio.h>
//#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	temp;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[end];
		tab[end] = tab[i];
		tab[i] = temp;
		i++;
		end--;
	}
}

/* int	main(void)
{
	int vect[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int	len;
	int i;
	
	len = 10;
	i = 0;
	while (i < len)
	{		
		printf ("%d", vect[i]);
		printf (" ");
		i++;
	}
	printf (" \n");

	ft_rev_int_tab(vect, len);

	i = 0;
	while (i < len)
	{		
		printf ("%d", vect[i]);
		printf (" ");
		i++;
	}
	printf (" \n");

	return (0);
}
 */