//#include <stdio.h>
//#include <unistd.h>
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	num = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9'))
			num = 0;
		i++;
	}
	if (num == 1)
		return (1);
	else
		return (0);
}
/* 
int main (void)		
{
	char *line = "0123456789";
	int i;
	
	i = 0;
	printf ("\n");
	while (line[i] != '\0')
	{		
		printf ("%c", line[i]);
		i++;
	}
		printf ("\n\n");
 
	if (ft_str_is_numeric(line) == 1)
		printf ("only num (or empty)\n\n");
	else
		printf ("NOT only num\n\n");




	return(0);
}
 */