/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:28:15 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 11:12:10 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}

// void	ft_bzero_lst(void *s)
// {
// 	unsigned char	*str;
// 	size_t	n = ft_strlen((const char *)s);

// 	str = ((unsigned char *)s);
// 	while (n--)
// 	{
// 		*str = 0;
// 		str++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	size_t	i = 0;
// 	t_list *lst = NULL;
// 	while (argc)
// 	{
// 		t_list	*new = ft_lstnew(argv[i]);
// 		ft_lstadd_back(&lst, new);
// 		i++;
// 		argc--;
// 	}
// 	t_list *test = lst;
// 	while (test)
// 	{
// 		ft_putstr_fd(test->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		test = test->next;
// 	}
// 	ft_putstr_fd("Clear List\n", 1);
// 	ft_lstclear(&lst, ft_bzero_lst);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		lst = lst->next;
// 	}
// 	ft_putstr_fd("End Test", 1);
// }