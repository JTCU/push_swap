#include "push_swap.h"

void ft_evaluate (int *a_arr, int *b_arr, int la, int lb, int argc)
{
	ft_r(a_arr, argc, 1);
	ft_print_arr(a_arr, b_arr, argc);
	ft_r(b_arr, argc, 2);
	ft_print_arr(a_arr, b_arr, argc);

	ft_s(a_arr, 1);
	ft_print_arr(a_arr, b_arr, argc);
	ft_s(b_arr, 2);
	ft_print_arr(a_arr, b_arr, argc);
}

int main (int argc, char **argv)
{
	int *a_arr;
	int *b_arr;
	int la;
	int lb;

	la = argc;
	lb = 0;
	if (argc >= 3)
	{
		printf("-------------------------------------------------------------------------------------------------------------------------------\n");
		a_arr = (int *)malloc(sizeof(int) * argc);
		b_arr = (int *)malloc(sizeof(int) * argc);
		if (!a_arr || !b_arr)
			return (0);
		ft_init_arr(a_arr, b_arr, argc, argv);
		ft_print_arr(a_arr, b_arr, argc);
		ft_evaluate(a_arr, b_arr, la, lb, argc);
		ft_free(a_arr, b_arr);
		return (1);
	}
	ft_putstr("Error\n");
	return (0);
}