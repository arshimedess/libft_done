/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/01 15:57:23 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/07 18:55:56 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size != 0)
	{
		if (size <= dst_len)
		{
			return (size + src_len);
		}
		while ((size - dst_len - 1 > 0) && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
			size--;
		}
		dst[dst_len + i] = '\0';
		return (dst_len + src_len);
	}
	return (size + src_len);
}
// int main(void)
// {	
// 	char	desti[10] = "cat";
// 	char	sourc[] = "dog";
// 	printf("mine: the return value is %zu and the dest is now::: %s\n",
//  ft_strlcat(desti, sourc, 0), desti);
// 	char	desti2[10] = "cat";
// 	char	sourc2[] = "dog";
// 	printf("org : the return value is %zu and the dest is now::: %s",
//  strlcat(desti2, sourc2, 0), desti2);
// 	return (0);
// }
// Think of strlcat in two phases: first find where dst ends,
// then append src into the space that's left.
// And remember the trap: size is the whole box, not the free space.