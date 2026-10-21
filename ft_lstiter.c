/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/19 14:29:03 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 14:52:34 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;
	int		size;
	t_list	*next_node;

	if (lst == NULL || f == NULL)
		return ;
	size = ft_lstsize(lst);
	tmp = lst;
	while (size > 0)
	{
		next_node = tmp->next;
		f(tmp->content);
		tmp = next_node;
		size--;
	}
}
