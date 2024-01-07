/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:52:05 by patyaowa          #+#    #+#             */
/*   Updated: 2024/01/07 19:58:44 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

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
		if (temp)
			free(temp);
		if (!(*backup))
			return (NULL);
		if (ft_strchr(*backup, '\n'))
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
	temp = ft_substr(line, i + 1, -1);
	if (!temp)
		return (NULL);
	if (temp[0] == '\0')
	{
		free(temp);
		temp = NULL;
		return (NULL);
	}
	return (temp);
}

static char	*ft_cut_line(char *line)
{
	int		i;
	char	*new;

	if (!line)
		return (NULL);
	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	new = ft_substr(line, 0, i+1);
	free(line);
	return (new);
}
char	*get_next_line(int fd)
{
	char		*buf;
	char		*line;
	char		*out;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
	{
		if (backup)
		{
			free(backup);
			backup = NULL;
		}
		return (NULL);
	}
	line = ft_read(fd, buf, &backup);
	free(buf);
	if (!line)
	{
		if (backup)
		{
			free(backup);
			backup = NULL;
		}
		return (NULL);
	}
	backup = ft_get_new_line(line);
	out = ft_cut_line(line);
	if (out && out[0] == '\0')
		free(out);
	return (out);
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

// int	main(int argc, char * argv[])
// {
// 	int file = open(argv[1], O_RDONLY);
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