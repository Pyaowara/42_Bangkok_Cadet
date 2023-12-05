#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	char	*line = NULL;
	char	*buf;
	int		readline;
	char	*temp;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);

	readline = 1;
	while (readline > 0)
	{
		readline = read(fd, buf, BUFFER_SIZE);
		if (readline == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[readline] = '\0';
		if (!line)
			line = ft_strdup("");
		temp = line;
		line = ft_strjoin(temp, buf);
		free(temp);
		if (ft_strchr(buf, '\n'))
			break;
	}

	free(buf);

	if (line && line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

// int	main()
// {
// 	int file = open("test.txt", O_RDONLY);
// 	char	*str;
// 	str = get_next_line(file);
// 	while (str)
// 	{
// 		printf("%s", str);
// 		free(str);
// 		str = get_next_line(file);
// 	}
// 	close(file);

// 	return (0);
// }
