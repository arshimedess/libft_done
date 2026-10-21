/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/01 19:56:08 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/10 15:43:54 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*storage;
	size_t			i;

	storage = s;
	i = 0;
	while (n > 0)
	{
		storage[i] = 0;
		i++;
		n--;
	}
	return ;
}
// int main(void)
// {
// 	char str[] = "something is in something due to something";
// 	char str2[] = "something is in something due to something";

// 	ft_bzero(str, 2);
// 	bzero(str2, 2);

// 	printf("\nafter ft_bzero(): %s\n", str);
// 	printf("\nafter bzero(): %s\n", str2);

// 	return (0);
// }