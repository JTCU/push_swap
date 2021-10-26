#include "push_swap.h"

void ft_s(int *arr, int *lx, int argc, int opt)
{
	int l;
	int temp;

	if (opt == 1)
		printf("Exec sa:\n");
	if (opt == 2)
		printf("Exec sb:\n");
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
		printf("Exec pa:\n");
		a_arr[argc - lx[0] - 2] = b_arr[argc - lx[1] - 1];
		b_arr[argc - lx[1] - 1] = 0;
		lx[0]++;
		lx[1]--;
	}
	if (opt == 2)
	{
		printf("Exec pb:\n");
		b_arr[argc - lx[1] - 2] = a_arr[argc - lx[0] - 1];
		a_arr[argc - lx[0] - 1] = 0;
		lx[0]--;
		lx[1]++;
	}
}

void ft_r(int *arr, int *lx, int argc, int opt)
{
	int i;
	int l;
	int temp;

	if (opt == 1)
		printf("Exec ra:\n");
	if (opt == 2)
		printf("Exec rb:\n");
	l = lx[opt - 1];
	i = argc - 1 - l;
	temp = arr[i];
	while (i < argc - 2)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = temp;
}

void ft_rr(int *arr, int argc, int opt)
{
	int i;
	int temp;

	if (opt == 1)
		printf("Exec rra:\n");
	if (opt == 2)
		printf("Exec rrb:\n");
	i = argc - 2;
	temp = arr[i];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[i] = temp;
}
