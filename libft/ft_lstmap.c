/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:47:50 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/30 14:29:08 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmplst;
	void	*tmpcontent;

	newlst = NULL;
	while (lst)
	{
		tmpcontent = f(lst->content);
		tmplst = ft_lstnew(tmpcontent);
		if (!tmplst)
		{
			del(tmpcontent);
			if (newlst)
				ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmplst);
		lst = lst->next;
	}
	return (newlst);
}

// void	*ft_toupper_lst(void *str)
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
// 	return (str);
// }

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
// 	t_list	*new = ft_lstmap(lst, ft_toupper_lst, ft_bzero_lst);
// 	while (lst)
// 	{
// 		ft_putstr_fd(lst->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		lst = lst->next;
// 	}
// 	while (new)
// 	{
// 		ft_putstr_fd(new->content, 1);
// 		ft_putstr_fd("\n", 1);
// 		new = new->next;
// 	}
// }