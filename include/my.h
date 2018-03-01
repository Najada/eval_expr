/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h for Evalxpr project 
*/

#ifndef MY_H_
#define MY_H_

int	my_strtol(char *str, char **endptr);
int	summands(char **str);
int	factors(char **str);
void	space_killer(char *str);
int	my_put_nbr(int nb);
int	my_nb_len(int nb);
void	my_putchar(char c);
int	eval_expr(char	**str);
int	my_strlen(char const *str);

#endif /* MY_H_ */
