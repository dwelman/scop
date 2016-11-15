/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daviwel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:02:25 by daviwel           #+#    #+#             */
/*   Updated: 2016/11/14 10:02:26 by daviwel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCOP_H
# define SCOP_H
# define BUFF_SIZE (size_t)512
# include <libc.h>
# include <stdio.h>
# include <errno.h>
# include <GL/glew.h>

# define GLFW_DLL
# include <GLFW/glfw3.h>

# include <OpenGL/OpenGL.h>

typedef struct	s_obj
{
	int		vert_count;
	int		face_count;
	float	*vertices;
	float	*normals;
}				t_obj;

typedef struct	s_file
{
	char	**contents;
	size_t	size;
}				t_file;

static float	angle = 30.0f;

static float	cam_angle = 0.0f;

void	handleKeypress(unsigned char key, int x, int y);

void	handleResize(int w, int h);

void	drawScene();

void	update(int value);

t_file	readfile(int argc, char **argv);

t_obj	parsefile(t_file file);

char	*read_shader(char *filename);

#endif
