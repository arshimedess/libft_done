/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/12 23:27:15 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/21 11:05:10 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tell_len(int n)
{
	size_t	num_len;
	long	n_butlong;

	n_butlong = n;
	num_len = 0;
	if (n_butlong == 0)
		return (1);
	if (n_butlong < 0)
	{
		num_len++;
		n_butlong = n_butlong * -1;
	}
	while (n_butlong != 0)
	{
		num_len++;
		n_butlong = n_butlong / 10;
	}
	return (num_len);
}

char	*ft_itoa(int n)
{
	char	*store;
	size_t	len;
	long	n_butlong;

	n_butlong = n;
	len = tell_len(n_butlong);
	store = malloc((len + 1) * sizeof(char));
	if (store == NULL)
		return (NULL);
	store[len] = '\0';
	if (n_butlong == 0)
		return (store[0] = '0', store);
	if (n_butlong < 0)
	{
		n_butlong = n_butlong * -1;
		store[0] = '-';
	}
	while (n_butlong > 0)
	{
		store[len - 1] = (n_butlong % 10) + '0';
		n_butlong = n_butlong / 10;
		len--;
	}
	return (store);
}

// int	main(void)
// {
// 	char	*s;

// 	s = ft_itoa(INT_MIN);
// 	printf("int min:: %s\n", s);
// 	free(s);
// 	s = ft_itoa(INT_MAX);
// 	printf("int max:: %s\n", s);
// 	free(s);
// 	s = ft_itoa(-214748);
// 	printf("random :: %s\n", s);
// 	free(s);
// 	return (0);
// }