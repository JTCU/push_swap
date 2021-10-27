#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>

//void ft_print_arr (int *a_arr, int *b_arr, int argc);

void ft_putstr(char *str);
void ft_error(void);
void ft_init_arr(int *a_arr, int *b_arr, int argc, char **argv);
void ft_free(int *a_arr, int *b_arr);
int	ft_atoi(char *nptr);
int ft_check_input(int argc, char *argv);
void ft_get_arr(int argc, char **argv, int *arr);
void ft_s(int *arr, int *lx, int argc, int opt);
void ft_p(int *a_arr, int *b_arr, int *lx, int argc, int opt);
void ft_r(int *arr, int *lx, int argc, int opt);
void ft_rr(int *arr, int *lx, int argc, int opt);
int ft_get_minpos(int *arr, int l, int argc);
int ft_check_order (int *arr, int l, int argc);

#endif