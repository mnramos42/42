#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	delta;

	i = 0;
	delta = 0;
	while (((s1[i] != 0) && (s2[i] != 0)) && (delta == 0))
	{
		if ((s1[i]) != (s2[i]))
			delta = ((unsigned char) s1[i]) - ((unsigned char) s2[i]);
		i++;
	}
	return (delta);
}

int	main(void)
{
	char strX[] = "abcde";
	char strY[] = "abcde";
	int diff;

	
	printf("\n%s\n", strX);
	printf("\n%s\n\n", strY);
	
	diff = ft_strcmp(strX, strY);

	printf("%d\n", diff);

	return(0);
}