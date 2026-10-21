/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/29 16:20:22 by ahossein      #+#    #+#                 */
/*   Updated: 2026/09/30 16:09:46 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
// int main(void)
// {
// 	int c;
// 	// c = 65;
// 	c = 'a';

// 	printf("result from my function: %d\n",ft_isalpha(c));
// 	printf("result from the original function: %d\n",isalpha(c));
// 	return 0;
// }