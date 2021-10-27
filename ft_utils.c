#include "push_swap.h"

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

//RECORDAR QUITAR FUNCIÓN
/*void ft_print_arr (int *a_arr, int *b_arr, int argc)
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
}*/

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

int ft_get_minpos(int *arr, int l, int argc)
{
	int i;
	int val;
	int pos;

	i = argc - l;
	val = arr[i - 1];
	pos = 0;
	while (i < argc - 1)
	{
		if (arr[i] < val)
		{
			val = arr[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int ft_check_order (int *arr, int l, int argc)
{
	int i;

	i = argc - 1 - l;
	while (i + 1 < argc - 1)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}