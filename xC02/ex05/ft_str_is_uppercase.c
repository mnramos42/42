//#include <stdio.h>
//#include <unistd.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alpha_up;

	alpha_up = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			alpha_up = 0;
		i++;
	}
	if (alpha_up == 1)
		return (1);
	else
		return (0);
}

/* int main (void)		
{
	char *line = "";
	int i;
	
	i = 0;
	printf ("\n");
	while (line[i] != '\0')
	{		
		printf ("%c", line[i]);
		i++;
	}
		printf ("\n\n");
 
	if (ft_str_is_uppercase(line) == 1)
		printf ("only alpha UPPER case (or empty)\n\n");
	else
		printf ("NOT only alpha UPPER case\n\n");




	return(0);
}
 */