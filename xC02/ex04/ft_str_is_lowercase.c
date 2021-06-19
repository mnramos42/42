//#include <stdio.h>
//#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	alpha_low;

	alpha_low = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			alpha_low = 0;
		i++;
	}
	if (alpha_low == 1)
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
 
	if (ft_str_is_lowercase(line) == 1)
		printf ("only alpha lower case (or empty)\n\n");
	else
		printf ("NOT only alpha lower case\n\n");




	return(0);
}
 */