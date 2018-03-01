/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

char	*my_strdup(char const *src);

Test(my_strtol, is_my_strtol_equal_to_123)
{
	int	a;
	char	*ptr;
	char	str[]= "123-34567";
	
	a = my_strtol(str, &ptr);
	cr_assert_eq(a, 123);
}

Test(summands, is_my_sum_equal_to_24)
{
	int	a;
	char	*str;
	
	str = malloc(1234);
	str = my_strdup("1*2+1*2");
	a = summands(&str);
	cr_assert_eq(a, 4);
}

Test(my_putchar, my_putchar_displays_c)
{
	
}

Test(my_put_nbr, test_my_put_nbr)
{
	cr_assert_eq(my_put_nbr(123), 0);
}

Test(my_nb_len, test_my_nb_len)
{
	cr_assert_eq(my_nb_len(1230), 1000);
}
