/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 14:24:49 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/21 12:33:01 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if (size != 0 && __SIZE_MAX__ / size < nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
// this is basically:: calloc = malloc + fill with zeros
// A size_t holds at most 18446744073709551615
// __SIZE_MAX__ / size means the largest number of elements we can have
// If nmemb is more than that, nmemb × size would wrap around