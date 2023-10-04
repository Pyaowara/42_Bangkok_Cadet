/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:31:50 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 15:30:44 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = malloc(count * size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}

// #include <stdio.h>
// int	main()
// {
// 	int	i = 5;
// 	int	j = 0;
// 	int *ptr = ft_calloc(i, sizeof(int));;
// 	while (i)
// 	{
// 		ptr[j] = j + 1;
// 		i--;
// 		j++;
// 	}
// 	i = 0;
// 	while (ptr[i])
// 	{
// 		printf("%d", ptr[i]);
// 		i++;
// 	}
// }