/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:52:10 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 12:47:47 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_tmp;
	char	*src_tmp;

	dst_tmp = (char *)dst;
	src_tmp = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (len--)
		{
			dst_tmp[len] = src_tmp[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// #include <string.h>
// int	main()
// {
// 	const void	*s1 = "Hello World";
// 	void	*s2;
// 	void	*s3;

// 	s2 = malloc(sizeof(char) * 12);
// 	s3 = malloc(sizeof(char) * 12);
// 	ft_memmove(s2, s1, 12);
// 	ft_memcpy(s3, s1, 12);
// 	ft_putstr_fd(s2, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(s3, 1);
// 	free(s2);
// 	free(s3);
// }

// #include <string.h>
// int	main()
// {
// 	char	*s2;
// 	void	*d;
// 	void	*s;

// 	s2 = malloc(sizeof(char) * 12);
// 	s2[0] = 'H';
// 	s2[1] = 'e';
// 	s2[2] = 'l';
// 	s2[3] = '\0';
// 	d = s2 + 1;
// 	s = s2;
// 	ft_memmove(d, s, 12);
// 	ft_putstr_fd(d, 1);
// 	free(s2);
// }