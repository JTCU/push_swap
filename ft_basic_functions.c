#include "push_swap.h"

int	ft_atoi(char *nptr)
{
	int	c;
	int	n;
	int	s;

	c = 0;
	n = 0;
	s = 1;
	while (nptr[c] == ' ' || nptr[c] == '\n' || nptr[c] == '\t'
		|| nptr[c] == '\v' || nptr[c] == '\f' || nptr[c] == '\r')
	{
		c++;
	}
	if ((nptr[c] == '+' || nptr[c] == '-') && nptr[c])
	{
		if (nptr[c] == '-')
			s = -1;
		c++;
	}
	while ((nptr[c] >= '0' && nptr[c] <= '9') && nptr[c])
	{
		n = (10 * n) + nptr[c] - 48;
		c++;
	}
	return (n * s);
}

void ft_free(int *a_arr, int *b_arr)
{
	free(a_arr);
	free(b_arr);
}
