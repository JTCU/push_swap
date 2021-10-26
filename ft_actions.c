#include "push_swap.h"

void ft_r(int *arr, int argc, int opt)
{
	int i;
	int temp;

	if (opt == 1)
		printf("Exec ra:\n");
	if (opt == 2)
		printf("Exec rb:\n");
	i = 0;
	temp = arr[0];
	while (i < argc - 2)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = temp;
}

void ft_s(int *arr, int opt)
{
	int temp;

	if (opt == 1)
		printf("Exec sa:\n");
	if (opt == 2)
		printf("Exec sb:\n");
	if (arr[1])
	{
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	}
	else
		printf("Error\n");
}