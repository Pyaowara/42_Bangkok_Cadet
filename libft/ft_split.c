/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:58:30 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/30 13:23:42 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static int	ft_clearmalloc(int i, char **str)
{
	int	j;

	j = 0;
	if (!str[i])
	{
		while (str[j])
		{
			free(str[j]);
			j++;
		}
		free(str);
		return (0);
	}
	return (1);
}

static int	ft_setlen(char const *s, char c)
{
	size_t	len;

	if (ft_strchr(s, c))
		len = ft_strchr(s, c) - s;
	else
		len = ft_strlen(s);
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	i = 0;
	str = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!str || !s)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len = ft_setlen(s, c);
			str[i++] = ft_substr(s, 0, len);
			if (ft_clearmalloc(i - 1, str) == 0)
				return (NULL);
			s += len;
		}
	}
	str[i] = NULL;
	return (str);
}

// #include <stdio.h>
// int		main()
// {
// 	char	**test;
// 	size_t	i;

// 	i = 0;
// 	test = ft_split("Hello is it me you looking for", ' ');
// 	while (test[i])
// 	{
// 		printf("%s\n", test[i]);
// 		free(test[i]);
// 		i++;
// 	}
// 	free(test);
// }

// #include <stdio.h>
// int		main()
// {
// 	char	**test;
// 	size_t	i;

// 	i = 0;
// 	test = ft_split("Hel lo!", ' ');
// 	while (test[i])
// 	{
// 		printf("%s\n", test[i]);
// 		free(test[i]);
// 		i++;
// 	}
// 	free(test);
// }
