//#include <stdio.h>
//#include <unistd.h>
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size < 1)
		return (len);
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

/* int main (void)		
{
	char line[12] = "Hello World!";
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
 
	ft_strlcpy(other, line, lim);

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