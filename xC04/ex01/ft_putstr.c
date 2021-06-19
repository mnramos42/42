//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}	
}

/* int	main(void)
{
	char *line;

	write(1, "\n", 1);
	line = "42 is for the brave!";
	ft_putstr(line);
	write(1, "\n\n", 2);

	return (0);
}
 */