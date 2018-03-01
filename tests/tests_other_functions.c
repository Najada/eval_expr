/*
** EPITECH PROJECT, 2017
** test
** File description:
** test
*/

#include <my.h>
#include <criterion/criterion.h>

char	*my_strdup(char const *src);

Test(factors, is_my_factor_equal_to_1)
{
	int	a;
	char	*str;
	
	str = malloc(1234);
	str = my_strdup( "1*1*1/1/1");
	a = factors(&str);
	cr_assert_eq(a, 1);
}

Test(space_killer, is_my_str_equal_with_space)
{
	char	str[] = "    123";
	
	space_killer(str);
	cr_assert_eq(str[0], '1');
}

Test(eval_expr, eval_expr_is_a_masterpiece)
{
	int	a;
	char	*str;

	str = malloc(1234);
	str = my_strdup("1 + 4 - (4 * 3 % 12");
	a = eval_expr(&str);
	cr_assert_eq(a, 5);
}

Test(my_strlen, is_str_length_equal_to_len_v1)
{
	cr_assert(my_strlen("This is a test") == 14);
}
