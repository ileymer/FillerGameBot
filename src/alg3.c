/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeonosi <dgeonosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 08:39:57 by dgeonosi          #+#    #+#             */
/*   Updated: 2020/08/18 22:39:22 by dgeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	linefij(t_filler *map)
{
	int i;
	int j;

	i = 0;
	map->f_i = 0;
	map->f_j = 0;
	map->f_ii = 2000000000;
	map->f_jj = 200000000;
	while (i < map->f_n)
	{
		j = 0;
		while (j < map->f_m)
		{
			if (map->piece[i][j] == ('*'))
			{
				if (map->f_i < i)
					map->f_i = i;
				if (map->f_j < j)
					map->f_j = j;
			}
			j++;
		}
		i++;
	}
	linefij2(map);
}

void	linefij2(t_filler *map)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < map->f_n)
	{
		j = 0;
		while (j < map->f_m)
		{
			if (map->piece[i][j] == ('*'))
			{
				if (map->f_ii > i)
					map->f_ii = i;
				if (map->f_jj > j)
					map->f_jj = j;
			}
			j++;
		}
		i++;
	}
}
