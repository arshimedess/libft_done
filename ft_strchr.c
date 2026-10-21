/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/07 20:01:25 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/08 16:08:48 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*p;

	p = (char *)s;
	i = 0;
	if ((char)c == '\0')
		return (p + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (p[i] == (char)c)
			return (p + i);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char str[] = "abcdfcefgfdg hcsdts jddg";
// 	printf("mine:::%p\n", ft_strchr(str, 'd' + 256));
// 	printf("org::::%p", strchr(str, 'd' + 256));
// 	return (0);
// }
//not sure if i get the casting for c yet.