/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:37:48 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 11:23:26 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void	ft_toupper_lst(void *str)
// {
// 	size_t	i = 0;
// 	char	*s = (char *)str;

// 	while (s[i])
// 	{
// 		if (97 <= s[i] && s[i] <= 122)
// 		{
// 			s[i] = s[i] - 32;
// 		}
// 		i++;
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
// 	ft_lstiter(lst, ft_toupper_lst);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		lst = lst->next;
// 	}
// }