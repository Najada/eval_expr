/*
** EPITECH PROJECT, 2017
** my_strtol
** File description:
** my_strtol
*/

#include <my.h>

int	my_strtol(char *str, char **endptr)
{
	int	i;
	int	nb;
	int	sgn;

	space_killer(str);
	nb = 0;
	i = 0;
	sgn = 1;
	if (str[i] == '-' || str[i] =='+') {
		if (str[i] == '-')
			sgn = -1 * sgn;
		i++;
	} 
	if (str[i] == '(') {
		i++;
		*endptr = &str[i];
		nb = summands(endptr);
		++*endptr;
		if (str[i] == ')')
			i++;
		return (sgn *nb);
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9') {
		nb = 10 * nb + (str[i] - '0');
		i++;
	}
	*endptr = &str[i];
	return (sgn *nb);
}

int	factors(char **str)
{
	int	a;
	int	b;
	char	operator;
	
	a = my_strtol(*str, str);
	while (**str) {
		operator = **str;
		if (operator != '*' && operator != '/' && operator != '%')
			return (a);
		b = my_strtol(*str + 1, str);
		if (operator == '*')
			a = a * b;
		else if (operator == '/')
			a = a / b;
		else
			a = a % b;
	}
	return (a);
}

int	summands(char **str)
{
	int	a;
	int	b;
	char	operator;

	a = factors(str);
	while (**str) {
		operator = **str;
		if (operator != '+' && operator != '-')
			return (a);
		++*str;
		b = factors(str);
		if (operator ==  '+')
			a = a + b;
		else
			a = a - b;
	}
	return (a);
}

int	eval_expr(char **str)
{
	return (summands(str));
}

void	space_killer(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i]) {
		if (str[i] == ' ') {
			for (j = i ; str[j] ; j++)
				str[j] = str[j + 1];
			i--;
		}
		i++;
	}
}
