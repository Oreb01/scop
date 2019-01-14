/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbesse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:34:53 by cbesse            #+#    #+#             */
/*   Updated: 2019/01/11 13:34:54 by cbesse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libmat.h"

t_mat4 mat4_translate(t_mat4 m, float x, float y, float z)
{
  t_mat4 m1;

  m1.m[0] = m.m[0];
  m1.m[1] = m.m[1];
  m1.m[2] = m.m[2];
  m1.m[3] = m.m[3];
  m1.m[4] = m.m[4];
  m1.m[5] = m.m[5];
  m1.m[6] = m.m[6];
  m1.m[7] = m.m[7];
  m1.m[8] = m.m[8];
  m1.m[9] = m.m[9];
  m1.m[10] = m.m[10];
  m1.m[11] = m.m[11];
  m1.m[12] = m.m[12] + x;
  m1.m[13] = m.m[13] + y;
  m1.m[14] = m.m[14] + z;
  m1.m[15] = m.m[15];
  return (m1);
}