/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/30 19:15:17 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/06 17:58:53 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* concepts that are helpful to understand/write this:
void pointers
data type conversion

that n-1 is because indexes are numbered from 0
if we delete (unsigned char *) it still works */

// im still looking to see how to use s instead of storage in the loop
// storage = (unsigned char *)s;

// to get the address of the pointer printf("%p\n", s);

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*storage;
	size_t			i;

	storage = s;
	i = 0;
	while (n > 0)
	{
		storage[i] = c;
		i++;
		n--;
	}
	return (s);
}

// int main(void)
// {
// 	char str[] = "something is in the way";
// 	char str2[] = "something is in the way";

// 	ft_memset(str+2, 'i', 5);
// 	memset(str2+2, 'i', 5);

// 	printf("\nafter ft_memset(): %s\n", str);
// 	printf("\nafter memset(): %s\n", str2);

// 	return (0);
// }