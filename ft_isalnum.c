/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 16:22:59 by ahossein      #+#    #+#                 */
/*   Updated: 2026/09/30 16:51:35 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

// int main(void)
// {
// 	printf("my function: %d\n", ft_isalnum(65));
// 	printf("original function: %d\n", isalnum(65));
// 	return (0);
// }