//#include <stdio.h>
//#include <unistd.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && start == 1)
		{
			str[i] = str[i] - 32;
			start = 0;
		}
		else if ((str[i] >= 'a' && str[i] <= 'z') && start == 0)
			start = 0;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && start == 0)
			str[i] = str[i] + 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z') && start == 1)
			start = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			start = 0;
		else
			start = 1;
		i++;
	}
	return (str);
}

/* int main(void)
{
	char string[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf("\n");
	printf("%s\n\n", string);

	ft_strcapitalize(string);

	printf("%s\n\n", string);

	return (0);
}
 */