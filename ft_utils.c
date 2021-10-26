#include "push_swap.h"
#include <unistd.h>


void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return ;
}

/*int ft_check_input(int argc, char *argv)
{
	return (1);
}*/

void ft_init_arr(int *a_arr, int *b_arr, int argc, char **argv)
{
	int i;

	i = 0;
	ft_get_arr(argc, argv, a_arr);
	while (i < argc - 1)
	{
		b_arr[i] = 0;
		i++;
	}
	return ;
}

void ft_print_arr (int *a_arr, int *b_arr, int argc)
{
	int i;
	
	i = 0;
	while (i < argc - 1)
	{
		printf ("%i	%i\n", a_arr[i], b_arr[i]);
		i++;
	}
	printf("_	_\na	b\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------\n");
}

void ft_get_arr(int argc, char **argv, int *arr)
{
	int i;

	i = 1;
	while (i < argc)
	{
		arr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
}