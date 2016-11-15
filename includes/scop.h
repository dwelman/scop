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

# include <libc.h>
# include <stdio.h>
# include <GL/glew.h>

# define GLFW_DLL
# include <GLFW/glfw3.h>

# include <OpenGL/OpenGL.h>

static float	angle = 30.0f;

static float	cam_angle = 0.0f;

void	handleKeypress(unsigned char key, int x, int y);

void	handleResize(int w, int h);

void	drawScene();

void	update(int value);


#endif
