#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

static char	*strjoin_free(char *s1, char *s2)
{
	char	*joined;

	if (!s1 || !s2)
		return (NULL);

	joined = ft_strjoin(s1, s2);
	free(s1);
	return (joined);
}

char	*get_next_line(int fd)
{
	char	*line;
	char	*buf;
	int		readline;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);

	line = ft_strdup("");
	if (!line)
	{
		free(buf);
		return (NULL);
	}

	readline = 1;
	while (readline > 0)
	{
		readline = read(fd, buf, BUFFER_SIZE);
		if (readline == -1)
		{
			free(buf);
			free(line);
			return (NULL);
		}
		buf[readline] = '\0';
		line = strjoin_free(line, buf);
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
