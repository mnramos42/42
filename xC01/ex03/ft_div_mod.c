//#include <stdio.h>
//#include <unistd.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int 	x;
	int 	y;
	int		d;
	int		m;

	x = 16;
	y = 5;
	
	printf ("\n");
	printf ("x = %d\n", x);
	printf ("y = %d\n", y);
	ft_div_mod(x, y, &d, &m);
	printf ("x divido por y dá = %d, com resto %d\n", d, m);
	printf ("\n");

	return (0);
} */