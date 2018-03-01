/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>

char	*my_strdup(char const *src)
{
	char	*mystr;
	int	i;
	int	a;

	a = my_strlen(src);
	mystr = malloc(sizeof(*src) * (a + 1));
	if (mystr == (char*)0)
		return (mystr);
	for (i = 0 ; i < a ; i++)
		mystr[i] = src[i];
	mystr[i] = '\0';
	return (mystr);
}
