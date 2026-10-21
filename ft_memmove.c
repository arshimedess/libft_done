/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 18:58:34 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/21 12:16:06 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*storage_dest;
	unsigned char	*storage_src;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	storage_dest = dest;
	storage_src = (unsigned char *)src;
	if (storage_dest > storage_src)
	{
		while (n > 0)
		{
			n--;
			storage_dest[n] = storage_src[n];
		}
		return (dest);
	}
	i = 0;
	while (i < n)
	{
		storage_dest[i] = storage_src[i];
		i++;
	}
	return (dest);
}
// int main(void)
// {
// 	// src at 0. dest at 2,
// btw remember when you say n = 3, valid indexes are 0, 1, 2, 3.
// 	char	array[] = "abcdefgh";
// 	printf	("my remake_array now is: %s\n",
// (char *)ft_memmove(array + 2, array, 3));

// 	char	array2[] = "abcdefgh";
// 	printf	("original funciton_array2 now is: %s\n",
// (char *)memmove(array2 + 2, array2, 3));
// 	return (0);
// }

/// i had this as my second while but due to having 26 lines
// change it to what you see
// if (storage_dest > storage_src)
// {
// 	i = n;
// 	while (i > 0)
// 	{
// 		i--;
// 		storage_dest[i] = storage_src[i];
// 	}
// 	return (dest);
// }
// i = 0;
// while (n > 0)
// {
// 	storage_dest[i] = storage_src[i];
// 	i++;
// 	n--;
// }
// return (dest);