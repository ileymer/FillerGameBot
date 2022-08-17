/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgeonosi <dgeonosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 22:33:21 by dgeonosi          #+#    #+#             */
/*   Updated: 2020/08/18 22:36:29 by dgeonosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include "filler.h"
# include "../libft/libft.h"

typedef struct	s_filler
{
	int			player;
	int			rival;
	char		**map;
	char		**piece;
	int			**mas;
	int			n;
	int			m;
	int			f_n;
	int			f_m;
	int			f_i;
	int			f_j;
	int			f_ii;
	int			f_jj;
}				t_filler;

void			valid_position2(int m[5], int i, int j, t_filler *map);
void			distrib_weight2(t_filler *map, int i, int j, int k);
void			def_player(t_filler *map);
int				def_plateau(t_filler *map);
int				def_map(t_filler *map);
void			def_piece(t_filler *map);
int				def_filler(t_filler *map);
void			del_mas(char *s);
int				valid_position(t_filler *map, int i, int j);
int				distance(int i, int j, int x, int y);
int				def_distance(t_filler *map, int x, int y);
void			linefij2(t_filler *map);
void			linefij(t_filler *map);
int				karta(t_filler *map);
void			distrib_weight (t_filler *map, int i, int j, int k);
int				check_two(t_filler *map);
void			ox(t_filler *map);
void			print(int x, int y);
void			re_var(t_filler *map);
void			check_map(t_filler *map);
int				distance_s(t_filler *map, int i, int j);

#endif
