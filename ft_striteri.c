/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/13 18:45:28 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/13 19:18:21 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//very similar to ft_strmapi but this one doesn't return anything
// works directly on the original string!
// these are basically the same:
	// f(i, s + i);
	// f(i, &s[i]);
	// (*f)(i, s + i);
	// (*f)(i, &s[i]);

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
	return ;
}
// void	upper_even(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// 	return;
// }
// int main(void)
// {
// 	char string[] = "03abnsdhe07565";
// 	ft_striteri(string, upper_even);
// 	printf("%s\n", string);
// 	return(0);
// }