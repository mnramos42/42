//#include <stdio.h>
//#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			alpha = 0;
		i++;
	}
	if (alpha == 1)
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
 
	if (ft_str_is_alpha(line) == 1)
		printf ("only alpha (or empty)\n\n");
	else
		printf ("NOT only alpha\n\n");




	return(0);
}
 */