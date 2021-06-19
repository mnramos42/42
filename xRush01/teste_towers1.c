#include <unistd.h>
int		towers(int a[4][4], int n, int *check_print, int num[16]);
int		Check_col_down (int a[4][4], int num[16]);
int		Check_col_up(int a[4][4], int num[16]);
int		Check_row_right(int a[4][4], int num[16]);
int		Check_row_left(int a[4][4], int num[16]);
int		Check(int a[4][4], int i, int j, int k);
void	Print(int a[4][4]);
void	middle_tower(int temp[4][4], int n, int *check_print, int num[16]);
void	can_place(int temp[4][4], int n, int *check_print, int num[16]);
int		Check_numbers_towers(int a[4][4], int num[16]);

void	Print(int a[4][4])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = a[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	middle_tower(int temp[4][4], int n, int *check_print, int num[16])	// just iterates (increases) 'n' if >15
{
	if (n == 15)															// o que o 'n' conta? looper... 16 much (starts on '1')
	{																		// e o 'check_print'? final stop point...
		if (Check_numbers_towers(temp, num) && *check_print == 0)			// 
		{
			Print(temp);
			*check_print = 1;
		}
	}
	else
	{
		towers(temp, n + 1, check_print, num);								// just iterates (increases) 'n' if >15
	}
}

void	can_place(int temp[4][4], int n, int *check_print, int num[16])
{
	int	i;
	int	j;
	int	k;

	i = n / 4;  // == 0;
	j = n % 4;	// == 0;
	k = 1;
	while (k <= 4)
	{
		if (Check(temp, i, j, k))						// 'k' já foi usado na linha 'i' ou na coluna 'j'?
		{
			temp[i][j] = k;								// use o 'k' na posição [i][j]			???
			middle_tower(temp, n, check_print, num);
			temp[i][j] = 0;								// coloque um '0' na posição [i][j]		??? ///
		}
		k++;											// 1, 2, 3, 4
	}
}

int	towers(int a[4][4], int n, int *check_print, int num[16])	// o que o 'n' conta? 
{																// o que o 'check_print' conta?
	int	temp[4][4];
	int	v_aux[3];

	v_aux[0] = 0;
	while (v_aux[0]++ < 4)														// exact meaning? vai 3 ou 4 vezes? 
	{
		v_aux[1] = 0;
		while (v_aux[1]++ < 4)
			temp[v_aux[0] - 1][v_aux[1] - 1] = a[v_aux[0] - 1][v_aux[1] - 1];   		// iguala as matrizes 'temp' (in scope) e 'a' (from main.c)
	}																					// ... linha a linha (uma coluna por vez em cada linha)
	v_aux[0] = n / 4;		// 0-3/4=0; 4-7/4=1 9-11/4=2 12-15/4=			// matrix 1,0? 0,0?		// ... mas pq a notação 0-1? ou na verdade o ++ no while statement já conta?
	v_aux[1] = n % 4;		// 0,4,8,12%4=0; 1,5,9,13%4=1 2,6,10,14cd%4=2 3%4=3 								// o ++ conta na entrada ou na saída?
	if (a[v_aux[0]][v_aux[1]] != 0)  
	{
		middle_tower(temp, n, check_print, num);
	}
	else
	{
		can_place(temp, n, check_print, num);	// n == 0;  (ou... posição ainda pode ser preenchida)
	}
	if (*check_print == 1)						// that's our main goal
		return (1);
	else
		return (0);								// seems like a final Error message (if input is impossible to solve) lin. 120
}

int	main_tower(int num[16])
{
	int		arr[4][4];
	int		check_print;
	int		i;
	int		j;

	i = 0;
	while (i < 4)									// this creates a 4x4 matrix with 0s;
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	check_print = 0;								// some kind of global counter.. 
	if (!(towers(arr, 0, &check_print, num)))		// seems like a final Error message (if input is impossible to solve) lin. 98
		write(1, "Error\n", 6);						
	return (0);										// if input has solution,
}
