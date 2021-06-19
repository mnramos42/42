//#include <stdio.h>
//#include <unistd.h>
void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int end;
    int temp;

    i = 0;
    size--;
    end = size;

    while (
      while (size >= 0 && end > 0)
      {
        while (end > 0)
        {
            if (tab[end - 1] > tab[end])
            {
                temp = tab[end];
                tab[end] = tab[end - 1];
                tab[end -1] = temp;
            }
            end--;
        }
        end = size;
        size--;
    }
}

/* int    main(void)
{
    int vect[5] = {30, 10, 50, 40, 20};

    int    len;
    int i;
    
    len = 5;
    i = 0;
    while (i < len)
    {        
        printf ("%d", vect[i]);
        printf (" ");
        i++;
    }
    printf (" \n");

    ft_sort_int_tab(vect, len);

    i = 0;
    while (i < len)
    {        
        printf ("%d", vect[i]);
        printf (" ");
        i++;
    }
    printf (" \n");


    return (0);
} */