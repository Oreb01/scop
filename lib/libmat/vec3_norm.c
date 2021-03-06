/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_norm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbesse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 14:21:47 by cbesse            #+#    #+#             */
/*   Updated: 2019/01/14 14:22:07 by cbesse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libmat.h"

double		vec3_norm(t_vec3 v)
{
	double	norm;

	norm = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
	return (norm);
}
