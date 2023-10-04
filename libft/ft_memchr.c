/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:01:05 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 11:33:00 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	letter;

	str = ((unsigned char *)s);
	letter = ((unsigned char)c);
	while (n--)
	{
		if (*str == letter)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}

// int	main()
// {
// 	const	void	*s = "Hello World";
// 	unsigned char	*r = ft_memchr(s, 'l', strlen((const char*)s));
// 	printf("%s", r);
// }