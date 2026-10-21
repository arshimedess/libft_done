/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: arshimedess <arshimedess@student.42.fr>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/10 10:38:41 by arshimedess   #+#    #+#                 */
/*   Updated: 2026/10/10 15:43:45 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}
// int main()
// {
// 	// char mystring[] = " ----++-12345ab567";
//     char mystring[] = "  --42ab";
// 	printf("my func:::::::%d\n", ft_atoi(mystring));
//     printf("original func:%d\n", atoi(mystring));
// 	return(0);
// }
