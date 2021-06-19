//#include <stdio.h>
//#include <unistd.h>
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* int	main(void)
{
	int x;
	int y;

	x = 19;
	y = 42;

	printf ("\n");
	printf ("x = %d\n", x);
	printf ("y = %d\n", y);
	printf ("\n");
	ft_swap(&x, &y);
	printf ("x = %d\n", x);
	printf ("y = %d\n", y);
	printf ("\n");

	return (0);
}
 */