#include "push_swap.h"

int ft_triage_minpos (int *a_arr, int *b_arr, int *lx, int argc, int minpos)
{
	int ret;

	ret = -1;
	if (minpos == 0)
	{
		ret = ft_check_order(a_arr, lx[0], argc);
		if (ret == 0)
			ft_p(a_arr, b_arr, lx, argc, 2);
	}
	if (minpos > 1)
	{
		if (minpos <= (lx[0]/2))
			ft_r(a_arr, lx, argc, 1);
		else if (minpos > (lx[0]/2))
			ft_rr(a_arr, lx, argc, 1);
	}
	ret = ft_check_order(a_arr, lx[0], argc);
	return (ret);
}

void ft_evaluate (int *a_arr, int *b_arr, int *lx, int argc)
{
	int ret;
	int minpos;

	ret = 0;
	minpos = 0;
	while (ret == 0)
	{
		if (a_arr[argc - 1 - lx[0]] > a_arr[argc - lx[0]] && lx[0] > 1)
		{
			ft_s(a_arr, lx, argc, 1);
		}
		minpos = ft_get_minpos(a_arr, lx[0], argc);
		ret = ft_triage_minpos(a_arr, b_arr, lx, argc, minpos);
	}
	while (lx[1] != 0)
		ft_p(a_arr, b_arr, lx, argc, 1);
}

int main (int argc, char **argv)
{
	int *a_arr;
	int *b_arr;
	int lx[2];

	lx[0] = argc - 1;
	lx[1] = 0;
	if (argc >= 3)
	{
		a_arr = (int *)malloc(sizeof(int) * argc);
		b_arr = (int *)malloc(sizeof(int) * argc);
		if (!a_arr || !b_arr)
			return (0);
		ft_init_arr(a_arr, b_arr, argc, argv);
		ft_evaluate(a_arr, b_arr, lx, argc);
		ft_free(a_arr, b_arr);
		return (1);
	}
	ft_putstr("Error\n");
	return (0);
}
