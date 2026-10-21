/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 21:54:38 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/06 22:29:39 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*storage;
	size_t			i;

	storage = (unsigned char *) s;
	i = 0;
	while (n > 0)
	{
		if (storage[i] == (unsigned char)c)
		{
			return (storage + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
// int main(void)
// {
// 	char str[] = "abcd ef g h jfs";
// 	printf("\nwith ft_memchr() till:%s\n", (char *)ft_memchr(str,'e', 9));
// 	printf("\nwith memchr() till:%s\n", (char *)memchr(str,'e', 9));

// 	return(0);
// }