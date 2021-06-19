//#include <stdio.h>
//#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	int	i;
	int	print;

	print = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			print = 0;
		i++;
	}
	if (print == 1)
		return (1);
	else
		return (0);
}

/* int main (void)		
{
	char *line = "Hello World!";
	int i;
	
	i = 0;
	printf ("\n");
	while (line[i] != '\0')
	{		
		printf ("%c", line[i]);
		i++;
	}
		printf ("\n\n");
 
	if (ft_str_is_printable(line) == 1)
		printf ("only printable (or empty)\n\n");
	else
		printf ("NOT only printable\n\n");




	return(0);
} */