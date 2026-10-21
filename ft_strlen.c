/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 17:00:46 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/20 15:05:12 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
// in the function:	
// to avoid any compiler warning about mixed signed and unsigned numbers

// int main(void)
// {
// 	char str [] = "something";

// 	printf("my function:%zu\n", ft_strlen(str));
// 	// or the same way of writing this ft_strlen(&str[0]);

// 	/* The name of an array automatically converts
// 	into a pointer to its very first element when you pass it to a function. */

// 	printf("%zu\n", strlen(str));

// 	// just to see difference with sizeof and its result for char arrays
// 	printf("%zu\n", sizeof(str));
// 	return (0);
// }