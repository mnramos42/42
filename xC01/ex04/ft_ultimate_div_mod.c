//#include <stdio.h>
//#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int	main(void)
{
	int 	x;
	int 	y;
	
	x = 16;
	y = 5;
	
	printf ("\n");
	printf ("x = %d\n", x);
	printf ("y = %d\n", y);

	ft_ultimate_div_mod(&x, &y);

	printf ("x divido por y dá = %d, com resto %d\n", x, y);
	printf ("\n");

	return (0);
} */