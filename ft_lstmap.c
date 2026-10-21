/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahossein <ahossein@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/10/19 14:54:13 by ahossein      #+#    #+#                 */
/*   Updated: 2026/10/19 18:39:33 by ahossein      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*neu_list;
	t_list	*neu_node;
	void	*neu_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	neu_list = NULL;
	while (lst != NULL)
	{
		neu_content = f(lst->content);
		neu_node = ft_lstnew(neu_content);
		if (neu_node == NULL)
		{
			del(neu_content);
			ft_lstclear(&neu_list, del);
			return (NULL);
		}
		ft_lstadd_back(&neu_list, neu_node);
		lst = lst->next;
	}
	return (neu_list);
}
