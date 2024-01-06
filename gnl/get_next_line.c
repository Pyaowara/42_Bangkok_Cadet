/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:52:05 by patyaowa          #+#    #+#             */
/*   Updated: 2024/01/06 17:58:53 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read(int fd, char *buf, char **backup)
{
	int		check;
	char	*temp;

	check = 1;
	while (check)
	{
		check = read(fd, buf, BUFFER_SIZE);
		if (check == -1)
		{
			free(*backup);
			*backup = NULL;
			return (NULL);
		}
		else if (check == 0)
			break;
		buf[check] = '\0';
		if (!(*backup))
			*backup = ft_strdup("");
		temp = *backup;
		*backup = ft_strjoin(temp, buf);
		if (!(*backup))
		{
			free(temp);
			temp = NULL;
			return (NULL);
		}
		free(temp);
		temp = NULL;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (*backup);
}

static char	*ft_get_new_line(char *line)
{
	int		i;
	char	*temp;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0')
		return (NULL);
	temp = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (!temp)
		return (NULL);
	if (temp[0] == '\0')
	{
		free(temp);
		temp = NULL;
		return (NULL);
	}
	line[i + 1] = '\0';
	return (temp);
}

char	*get_next_line(int fd)
{
	char		*buf;
	char		*line;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	line = ft_read(fd, buf, &backup);
	free(buf);
	if (!line)
		return (NULL);
	backup = ft_get_new_line(line);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int	main()
// {
// 	int file = open("test.txt", O_RDONLY);
// 	int i = 1;
// 	char	*str;
// 	str = get_next_line(file);
// 	while (str)
// 	{
// 		printf("Line %d: %s", i++, str);
// 		free(str);
// 		str = get_next_line(file);
// 	}
// 	close(file);

// 	return (0);
// }
