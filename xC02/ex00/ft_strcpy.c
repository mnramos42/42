//#include <stdio.h>
//#include <unistd.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main (void)		//printf ("i = %d - %s\n", i, dest);
{
	char *line = "Hello World!";
	char other[20] = "+-+-+-+-+-+-+-+-+";
	
	int i;
	int j;

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
 
	ft_strcpy(other, line);

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