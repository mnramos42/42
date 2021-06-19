//#include <stdio.h>
//#include <unistd.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int main (void)		//printf ("i = %d - %s\n", i, dest);
{
	char *line = "Hello World!";
	char other[20] = "+-+-+-+-+-+-+-+-+";
	unsigned int lim;

	int i;
	int j;

	lim = 5;

	i = 0;
	printf ("\n");
	while (line[i] != '\0')
	{		
		printf ("%c", line[i]);
		i++;
	}
	j = 0;
	printf ("\n");
	while (other[j] != '\0')
	{		
		printf ("%c", other[j]);
		j++;
	}

	printf ("\n\n");
 
	ft_strncpy(other, line, lim);

	i = 0;
	printf ("\n");
	while (line[i] != '\0')
	{		
		printf ("%c", line[i]);
		i++;
	}
	j = 0;
	printf ("\n");
	while (other[j] != '\0')
	{		
		printf ("%c", other[j]);
		j++;
	}
 
	printf ("\n\n");


	return(0);
} */