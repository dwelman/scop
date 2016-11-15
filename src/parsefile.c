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


t_obj	init_obj(t_file file)
{
	size_t 	line;
	int		line_len;
	t_obj	object;

	line = 0;
	object.vert_count = 0;
	object.face_count = 0;
	while (line < file.size)
	{
		line_len = strlen(file.contents[line]);
		if (line_len >= 2 && file.contents[line][0] == 'v' 
			&& file.contents[line][1] == ' ')
			object.vert_count++;
		else if (file.contents[line][0] == 'f')
			object.face_count++;
		line++;
	}
	printf("vertices = %d , faces = %d\n", object.vert_count, object.face_count);
	object.vertices = (float*)malloc(sizeof(float) * object.vert_count * 3);
	bzero(object.vertices, sizeof(float) * object.vert_count * 3);
	return (object);
}

void	setvert(float *vertices, char *line)
{
	int		i;
	char	*pos;
	
	pos = strchr(line, ' ');
	if (pos++)
		vertices[0] = atof(pos);
	pos = strchr(pos, ' ');
	if (pos++)
	vertices[1] = atof(pos);
	pos = strchr(pos, ' ');
	if (pos++)	
	vertices[2] = atof(pos);
	i = 0;
}

t_obj	parsefile(t_file file)
{
	size_t	line;
	t_obj	object;
	int		coord;
	int		v_pos;

	object = init_obj(file);
	line = 0;
	coord = 0;
	v_pos = 0;	
	while (line < file.size)
	{
		if (file.contents[line][0] == 'v' && file.contents[line][1] == ' ')
		{
			setvert(&object.vertices[v_pos], file.contents[line]);
		//	printf("vertex : (%f ; %f ; %f)\n", object.vertices[v_pos], object.vertices[v_pos + 1], object.vertices[v_pos + 2]);
			v_pos += 3;
		}
		line++;
	}
	return (object);
}