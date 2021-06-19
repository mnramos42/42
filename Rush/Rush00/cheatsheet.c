norminette -R CheckForbiddenSourceHeader

gcc -Wall -Wextra -Werror *.c && ./a.out

norminette -R CheckForbiddenSourceHeader && gcc -Wall -Wextra -Werror *.c && ./a.out


