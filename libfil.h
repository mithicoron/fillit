/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfil.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:50:43 by shicks            #+#    #+#             */
/*   Updated: 2016/12/06 18:50:47 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include "./libft/libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int			sqrt_strnum(char *str);
int			tet_A(char **s, char a, int i, int w);
int			tet_B(char **s, char a, int i, int w);
int			tet_C(char **s, char a, int i, int w);
int			tet_D(char **s, char a, int i, int w);
int			tet_E(char **s, char a, int i, int w);
int			tet_F(char **s, char a, int i, int w);
int			tet_G(char **s, char a, int i, int w);
int			tet_H(char **s, char a, int i, int w);
int			tet_I(char **s, char a, int i, int w);
int			tet_J(char **s, char a, int i, int w);
int			tet_K(char **s, char a, int i, int w);
int			tet_L(char **s, char a, int i, int w);
int			tet_M(char **s, char a, int i, int w);
int			tet_N(char **s, char a, int i, int w);
int			tet_O(char **s, char a, int i, int w);
int			tet_P(char **s, char a, int i, int w);
int			tet_Q(char **s, char a, int i, int w);
int			tet_R(char **s, char a, int i, int w);
int			tet_S(char **s, char a, int i, int w);
int			ft_atoj(char **map, char **str, char w, int i, int c);
int			ft_ktos(char **map, char **str, char w, int i, int c);
int			ft_tetcheck(char **map, char **str, char w, int i, int c);
char		*ft_piecetrim(char *s);
char		*ft_remake(char **map, int c);
void		ft_mapfil(char **map, int c);
void		ft_checkpiece(int argc, char **argv);
void		ft_placetet(char **map, char **str, int i, int c, int no_sol);

#endif
