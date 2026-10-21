/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 22:31:39 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/06 23:15:59 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*storage_s1;
	const unsigned char	*storage_s2;
	size_t				i;

	i = 0;
	storage_s1 = s1;
	storage_s2 = s2;
	while (n > 0)
	{
		if (storage_s1[i] != storage_s2[i])
		{
			return (storage_s1[i] - storage_s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
// int main(void)
// {
// 	char s1[] = "abcdefghijklmnop";
// 	char s2[] = "abcdefgporitgjgkdddag";
// 	printf("the return of my function is:%d\n", ft_memcmp(s1, s2, 10));
// 	printf("the return of original function is:%d\n", memcmp(s1, s2, 10));
// 	return (0);
// }
// adding const in the declaration fixes the errors with flags
//instead of casting while initializing storage1 and 2!