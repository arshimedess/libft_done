/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 16:09:58 by ahossein      #+#    #+#                 */
/*   Updated: 2026/09/30 16:51:24 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
// int main(void)
// {
// 	printf("my function result: %d\n", ft_isdigit(50));
// 	printf("original function result: %d\n", isdigit(50));
// 	return (0);
// }