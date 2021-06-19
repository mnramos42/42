//#include <stdio.h>
//#include <unistd.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

/* int main (void)
{
    char orig[] = "abcde";
    char final[20] = "ABCDE";
	unsigned int size;
        
	size = 10;

    printf("\n");
    printf("%s\n", orig);
    printf("%s\n", final);
    printf("\n");

    ft_strncat(final, orig, size);

    printf("%s\n", final);
    printf("\n");
}
 */