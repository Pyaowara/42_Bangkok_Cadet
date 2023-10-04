/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:05:54 by patyaowa          #+#    #+#             */
/*   Updated: 2023/10/01 12:15:27 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*str;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(len + 1 * sizeof(char));
	i = 0;
	j = 0;
	if (!s1 || !s2 || !str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcat(str, s2, len + 1);
	return (str);
}

// int	main()
// {
// 	char const	*s1 = "Hello ";
// 	char const	*s2 = "World";
// 	char	*s3 = ft_strjoin(s1, s2);

// 	ft_putstr_fd(s3, 1);
// }