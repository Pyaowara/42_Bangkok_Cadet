/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:48:59 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 14:28:23 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
	{
		while (src[j])
			j++;
		return (j);
	}
	while (i + j < dstsize - 1 && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (i > dstsize)
		return (ft_strlen(src) + dstsize);
	return (i + ft_strlen(src));
}

// #include <string.h>
// int	main()
// {
// 	const char	*src = "Hello is it me you looking for";
// 	char	dst[50] = "Test";
// 	char	dst2[50] = "Test";
// 	ft_putnbr_fd(ft_strlen(src), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_strlcat(dst, src, 20), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(strlcat(dst2, src, 20), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst2, 1);
// }