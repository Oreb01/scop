/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbesse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 16:27:36 by cbesse            #+#    #+#             */
/*   Updated: 2019/01/10 15:57:57 by cbesse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMAT_H
# define LIBMAT_H
# include <math.h>
# define AXIS_X 0
# define AXIS_Y 1
# define AXIS_Z 2

typedef struct	s_mat4
{
	float	m[16];
}				t_mat4;

typedef struct	s_vec3
{
	float	x;
	float	y;
	float	z;
}				t_vec3;

void			set_mat4(t_mat4 *m, float f);
t_mat4			mat4_add(t_mat4 m1, t_mat4 m2);
t_mat4			mat4_sub(t_mat4 m1, t_mat4 m2);
t_mat4			mat4_mult(t_mat4 m1, t_mat4 m2);
t_mat4			mat4_rot_axis(t_mat4 m, int axis, float angle);
t_mat4			mat4_scale(t_mat4 m, float f);
void			mat4_id(t_mat4 *m);
t_mat4			mat4_translate(t_mat4 m, float x, float y, float z);
t_vec3			vec3_mult(t_vec3 v1, double i);
t_vec3			vec3_negate(t_vec3 v1);
t_vec3			vec3_div(t_vec3 v1, double i);
t_vec3			vec3_set(double x, double y, double z);
t_vec3			vec3_normalize(t_vec3 v);
t_vec3			vec3_add(t_vec3 v1, t_vec3 v2);
t_vec3			vec3_sub(t_vec3 v1, t_vec3 v2);
t_vec3			vec3_cross(t_vec3 v1, t_vec3 v2);
double			vec3_dot(t_vec3 v1, t_vec3 v2);
double			vec3_norm(t_vec3 v);
#endif
