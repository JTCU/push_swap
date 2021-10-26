#include "push_swap.h"

/*void ft_evaluate (int *a_arr, int *b_arr)
{

}*/

int main (int argc, char **argv)
{
	int *a_arr;
	int *b_arr;

	if (argc > 1)
	{
		a_arr = (int *)malloc(sizeof(int) * argc);
		b_arr = (int *)malloc(sizeof(int) * argc);
		if (!a_arr || !b_arr)
			return (0);
		ft_init_arr(a_arr, b_arr, argc, argv);
		ft_print_arr(a_arr, b_arr, argc);
		//ft_evaluate(a_arr, b_arr);
		ft_free(a_arr, b_arr);
		return (1);
	}
	ft_putstr("Error\n");
	return (0);
}