/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/07 21:03:54 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/20 18:02:46 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	*p;

	p = (char *)s;
	slen = ft_strlen(s);
	while (slen > 0)
	{
		if (s[slen] == (char)c)
			return (p + slen);
		slen--;
	}
	if (s[0] == (char)c)
		return (p);
	return (NULL);
}
// int main(void)
// {
// 	char str[] = "abcdfcefgfdg hcsdts jddg";
// 	printf("mine:::%p\n", ft_strrchr(str, '\0'));
// 	printf("org::::%p", strrchr(str, '\0'));
// 	return (0);
// }