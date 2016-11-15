/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddu-toit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 11:24:57 by ddu-toit          #+#    #+#             */
/*   Updated: 2016/11/15 11:25:00 by ddu-toit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <scop.h>

int		file_count_lines(FILE *fd)
{
	int		count;
	char	*buffer;
	size_t	size;

	count = 0;
	size = BUFF_SIZE;
	buffer = (char*)malloc(sizeof(char) * BUFF_SIZE);
	while (getline(&buffer, &size, fd) > 0)
		count++;
	rewind(fd);
	free(buffer);
	return (count);
}

void	error(void)
{
	fprintf(stderr, "ERROR: %s\n", strerror(errno));
	exit(errno);
}

char **file_get_contents(FILE *fd)
{
	int		i;
	char	*buffer;
	size_t	size;
	char	**contents;
	int		read;

	i = 0;
	size = BUFF_SIZE;
	buffer = (char*)malloc(sizeof(char) * BUFF_SIZE);
	contents = (char**)malloc(sizeof(char*) * file_count_lines(fd) + 1);
	while ((read = getline(&buffer, &size, fd)) > 0)
	{
		buffer[read - 1] = '\0';
		if (read > 1 && buffer[0] != '#')
		{
			contents[i] = strdup(buffer);
			if (contents[i] == NULL)
				error();
			printf("line %d\t:\t%s\n", i, contents[i]);
			i++;		
		}
	}
	free(buffer);
	return (contents);
}

char **readfile(int argc, char **argv)
{
	FILE*	fd;
	char	**file;

	file = NULL;
	if (argc == 2)
	{
		fd = fopen(argv[1], "r");
		if (fd == NULL)
			error();
		else
			file = file_get_contents(fd);	
	}
	return (file);
}
