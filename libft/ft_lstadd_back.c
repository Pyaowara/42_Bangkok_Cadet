/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:32:20 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 11:16:01 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*newlst;

	if (*lst)
	{
		newlst = ft_lstlast(*lst);
		newlst->next = new;
	}
	else
		*lst = new;
}

// int	main()
// {
// 	t_list	*lst = ft_lstnew("Hello ");
// 	t_list	*new = ft_lstnew("World");
// 	ft_lstadd_back(&lst, new);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		lst = lst->next;
// 	}
// }