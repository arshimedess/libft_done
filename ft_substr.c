/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 16:33:54 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 17:56:17 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len == 0 || len == 0 || start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
	{
		sub = malloc(s_len - start + 1);
		if (sub == NULL)
			return (NULL);
		ft_strlcpy(sub, s + start, s_len - start + 1);
		return (sub);
	}
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
// int main(void)
// {
// 	char *p1 = ft_substr("hello world", 3, 6);
// 	printf("p1  mine:: [%s]  expected: [lo wor]\n", p1);
// 	free(p1);

// 	char *p2 = ft_substr("hello world", 6, 3);
// 	printf("p2  mine:: [%s]  expected: [wor]\n", p2);
// 	free(p2);

// 	char *p3 = ft_substr("hello world", 6, 5);
// 	printf("p3  mine:: [%s]  expected: [world]\n", p3);
// 	free(p3);

// 	char *p4 = ft_substr("hello", 0, 5);
// 	printf("p4  mine:: [%s]  expected: [hello]\n", p4);
// 	free(p4);

// 	char *p5 = ft_substr("hello", 4, 1);
// 	printf("p5  mine:: [%s]  expected: [o]\n", p5);
// 	free(p5);

// 	char *p6 = ft_substr("hello", 2, 100);
// 	printf("p6  mine:: [%s]  expected: [llo]\n", p6);
// 	free(p6);

// 	char *p7 = ft_substr("hello", 0, SIZE_MAX);
// 	printf("p7  mine:: [%s]  expected: [hello]\n", p7);
// 	free(p7);

// 	char *p8 = ft_substr("hello", 5, 3);
// 	printf("p8  mine:: [%s]  expected: []\n", p8);
// 	free(p8);

// 	char *p9 = ft_substr("hello", 0, 0);
// 	printf("p9  mine:: [%s]  expected: []\n", p9);
// 	free(p9);

// 	char *p10 = ft_substr("hello", 400, 20);
// 	printf("p10 mine:: [%s]  expected: []\n", p10);
// 	free(p10);

// 	char *p11 = ft_substr("", 0, 5);
// 	printf("p11 mine:: [%s]  expected: []\n", p11);
// 	free(p11);

// 	char *p12 = ft_substr(NULL, 0, 5);
// 	printf("p12 mine:: %p  expected: (nil)\n", (void *)p12);
// 	free(p12);
// 	return (0);
// }