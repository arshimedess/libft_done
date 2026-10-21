/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/06 18:04:23 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/21 12:03:53 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*storage_dest;
	unsigned char	*storage_src;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	storage_dest = dest;
	storage_src = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		storage_dest[i] = storage_src[i];
		i++;
		n--;
	}
	return (dest);
}
// int main(void)
// {
// 	char	source[] = "something";
// 	char	destination[] = "blablabla";
// 	printf	("my remake_destination now is: %s\n", 
// 		(char *)ft_memcpy(source, destination, 5));

// 	char	source2[] = "something";
// 	char	destination2[] = "blablabla";
// 	printf	("original funciton_destination2 now is: %s\n", 
// 		(char *)ft_memcpy(source2, destination2, 5));
// 	return (0);
// }