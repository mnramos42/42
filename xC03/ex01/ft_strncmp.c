#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	delta;
	unsigned int	stop;

	i = 0;
	delta = 0;
	stop = 0;
	if (n == 0)
		stop = 1;
	while (((s1[i] != '\0') && (s2[i] != '\0')) && \
	(i < n) && (delta == 0) && (stop == 0))
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
			{
				delta = (unsigned char) s1[i] - (unsigned char) s2[i];
				return (delta);
			}
			i++;
		}
	}
	return (delta);
}

int    main(void)
{
    char strX[] = "abcdeX";
    char strY[] = "abcdex";
    unsigned int num;
    int diff;

    num = 9;

    printf("\n%s\n", strX);
    printf("\n%s\n\n", strY);
    
    diff = ft_strncmp(strX, strY, num);

    printf("%d\n", diff);

    return(0);
}
