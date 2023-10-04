/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:18:51 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 12:21:08 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	dst_tmp = ((unsigned char *)dst);
	src_tmp = ((unsigned char *)src);
	if (!dst_tmp && !src_tmp)
		return (0);
	while (n--)
	{
		*dst_tmp = *src_tmp;
		dst_tmp++;
		src_tmp++;
	}
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
// 	ft_memcpy(s2, s1, 12);
// 	ft_memcpy(s3, s1, 12);
// 	ft_putstr_fd(s2, 1);
// 	ft_putstr_fd(s3, 1);
// 	free(s2);
// 	free(s3);
// }