/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:10:44 by payaowa           #+#    #+#             */
/*   Updated: 2023/10/01 12:12:37 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				f;
	char			*k;
	unsigned char	cha;

	i = 0;
	f = ft_strlen(s) + 1;
	k = (char *)s + ft_strlen(s);
	cha = (unsigned char)c;
	while (i < f)
	{
		if (*k == cha)
			return (k);
		k--;
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	ft_putstr_fd(ft_strrchr("Hello World", 'l'), 1);
// }