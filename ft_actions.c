#include "push_swap.h"

void ft_s(int *arr, int *lx, int argc, int opt)
{
	int l;
	int temp;

	if (opt == 1)
		printf("sa\n");
	if (opt == 2)
		printf("sb\n");
	l = lx[opt - 1];
	if (arr[argc -l])
	{
		temp = arr[argc - l - 1];
		arr[argc - l - 1] = arr[argc -l];
		arr[argc -l] = temp;
	}
	else
		printf("Error\n");
}

void ft_p(int *a_arr, int *b_arr, int *lx, int argc, int opt)
{
	if(!lx[2 - opt])
		return;
	if (opt == 1)
	{
		printf("pa\n");
		a_arr[argc - lx[0] - 2] = b_arr[argc - lx[1] - 1];
		b_arr[argc - lx[1] - 1] = 0;
		lx[0]++;
		lx[1]--;
	}
	if (opt == 2)
	{
		printf("pb\n");
		b_arr[argc - lx[1] - 2] = a_arr[argc - lx[0] - 1];
		a_arr[argc - lx[0] - 1] = 0;
		lx[0]--;
		lx[1]++;
	}
}

void ft_r(int *arr, int *lx, int argc, int opt)
{
	int i;
	int temp;

	if (opt == 1)
		printf("ra\n");
	if (opt == 2)
		printf("rb\n");
	i = argc - 1 - lx[opt - 1];
	temp = arr[i];
	while (i < argc - 2)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = temp;
}

void ft_rr(int *arr, int *lx, int argc, int opt)
{
	int i;
	int temp;

	if (opt == 1)
		printf("rra\n");
	if (opt == 2)
		printf("rrb\n");
	i = argc - 2;
	temp = arr[i];
	while (i > argc - 1 - lx[opt - 1])
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[i] = temp;
}
