//#include <stdio.h>
//#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* int	main(void)
{
	char *line;
	int	i;

	i = 0;

	line = "Esta string possui 33 caracteres!";

	printf("\n");
	printf("%s\n", line);
	
	i = ft_strlen(line);

	printf ("Checking... %d!\n", i);
	printf("\n");

	return (0);
} */