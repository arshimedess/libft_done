/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/07 14:59:20 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:55:30 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (size - 1 > 0 && src[i] != '\0')
		{
			dst[i] = src[i];
			size--;
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int main(void)
// {	
// 	char	desti[] = "somehting in here";
// 	char	sourc[] = "bring";
// 	printf("mine: the return value is %zu and the dest is now:::
// %s\n", ft_strlcpy(desti, sourc, 18), desti);
// 	char	desti2[] = "somehting in here";
// 	char	sourc2[] = "bring";
// 	printf("org : the return value is %zu and the dest is now:::
// %s", strlcpy(desti2, sourc2, 18), desti2);
// 	return (0);
// }
// size here is the size of the whole dst box	