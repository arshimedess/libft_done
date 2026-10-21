/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/13 18:06:31 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/13 18:44:08 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* f is a pointer to a function. It holds the address of where the function’s
code lives in memory, the same way a char * holds the address of a char. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*store;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	store = malloc((len + 1) * sizeof(char));
	if (store == NULL)
		return (NULL);
	store[len] = '\0';
	i = 0;
	while (i < len)
	{
		store[i] = f(i, s[i]);
		i++;
	}
	return (store);
}
// char	upper_even(unsigned int i, char c)
// {
// 	if (i % 2 == 0 && c >= 'a' && c <= 'z')
// 	return (c - 32);
// 	return (c);
// }
// int main(void)
// {
// 	printf("%s", ft_strmapi("03abnsdhe07565", upper_even));
// 	return(0);
// }