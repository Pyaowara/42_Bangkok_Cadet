/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:46:32 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 14:35:19 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	ft_toupper_mapi(unsigned int i, char s)
// {
// 	if (97 <= s && s <= 122)
// 	{
// 		s = s - 32;
// 	}
// 	return (s);
// }

// int	main()
// {
// 	char	*s = "Hello";
// 	char	*r = ft_strmapi(s, ft_toupper_mapi);
// 	ft_putstr_fd(r, 1);
// }