/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:46:15 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 10:47:27 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main()
// {
// 	t_list	*lst = ft_lstnew("Test");
// 	t_list	*front = ft_lstnew("Add front and ");
// 	printf("%s\n", lst->content);
// 	printf("%s\n", front->content);
// 	ft_lstadd_front(&lst, front);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		lst = lst->next;
// 	}
// }