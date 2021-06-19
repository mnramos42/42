int	argv_ck_order(char *argv[]);
int	argc_ck(int argc);
int	argv_ck_len(char *argv[]);
int	argv_ck_num(char *argv[]);      //these 4 functions are for error treatment: error_tratment.c

int	main_tower(int num[16]);

int	main(int argc, char *argv[])    // argc = quant. de parâmetros "strings"
{									// argv = string com os parâmetros
	int	i;
	int	aux_num;
	int	num[16];

	aux_num = 0;
	i = 0;
	if (argc_ck(argc))
	{
		if (argv_ck_order(argv) && argv_ck_len(argv))
		{
			while (argv[1][i] != '\0')                
			{
				if (argv[1][i] >= 49 && argv[1][i] <= 52)	// 49== 1; 52 == 4;
				{
					num[aux_num] = argv[1][i] - 48;			// 48 == 0;
					aux_num++;
				}
				i++;
			}
			main_tower(num);
		}
	}
	return (0);
}
