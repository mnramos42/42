//#include <stdio.h>
//#include <unistd.h>
char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != 0)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

/* int main (void)
{
    char orig[] = "World!";
    char final[20] = "Hello ";
        
    printf("\n");
    printf("%s\n", orig);
    printf("%s\n", final);
    printf("\n");

    ft_strcat(final, orig);

    printf("%s\n", final);
    printf("\n");
}
 */