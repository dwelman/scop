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

typedef struct	s_env
{
	float	*vertices;
}				t_env;

char	**readfile(int argc, char **argv);

char	*read_shader(char *filename);

#endif
