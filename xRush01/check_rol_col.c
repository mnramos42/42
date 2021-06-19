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

int	Check(int a[4][4], int i, int j, int k)
{
	int	m;
	int	n;

	n = 0;
	while (n < 4)
	{
		if (a[i][n] == k)			//lê cada posição (coluna) da linha em questão (i) (a começar da primeira),
			return (0);				// mais especificamente, checa se 'k' ja foi usado na linha 'i'... "já foi"
		n++;						
	}
	m = 0;
	while (m < 4)
	{
		if (a[m][j] == k)			//lê cada posição (coluna) da linha em questão (j) (a começar da primeira),
			return (0);				// mais especificamene, checa se 'k' jáá foi usado na coluna 'j'... "já foi"
		m++;						// pq checar ambas (linha i e coluna j ao mesmo tempo?
	}								
	return (1);						// "'k' ainda NÃO foi usado na linha 'i' e nem na coluna 'j';
	}								// return(0) no main: Ok! else, return(0): 'FALSE' 						
