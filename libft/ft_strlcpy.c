/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:32:01 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 14:29:20 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
	{
		dst[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>
// int	main()
// {
// 	const char	*src = "Hello is it me you looking for";
// 	char	*dst = malloc(sizeof(char) * 9);
// 	char	*dst2 = malloc(sizeof(char) * 9);
// 	ft_putnbr_fd(ft_strlen(src), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_strlcpy(dst, src, 9), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(strlcpy(dst2, src, 9), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(dst2, 1);
// 	free(dst);
// 	free(dst2);
// }