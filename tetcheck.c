/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:43:19 by shicks            #+#    #+#             */
/*   Updated: 2016/12/06 18:43:24 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int			ft_atoj(char **map, char **str, char w, int i, int c)
{
	int	a;

	a = 0;
	if ((*str)[j] == 'A')
		a = tet_A(map, w, i, c);
	if ((*str)[j] == 'B')
		a = tet_B(map, w, i, c);
	if ((*str)[j] == 'C')
		a = tet_C(map, w, i, c);
	if ((*str)[j] == 'D')
		a = tet_D(map, w, i, c);
	if ((*str)[j] == 'E')
		a = tet_E(map, w, i, c);
	if ((*str)[j] == 'F')
		a = tet_F(map, w, i, c);
	if ((*str)[j] == 'G')
		a = tet_G(map, w, i, c);
	if ((*str)[j] == 'H')
		a = tet_H(map, w, i, c);
	if ((*str)[j] == 'I')
		a = tet_I(map, w, i, c);
	if ((*str)[j] == 'J')
		a = tet_J(map, w, i, c);
	return (a);
}

int			ft_ktos(char **map, char **str, char w, int i, int c)
{
	int	a;

	a = 0;
	if ((*str)[j] == 'K')
		a = tet_K(map, w, i, c);
	if ((*str)[j] == 'L')
		a = tet_L(map, w, i, c);
	if ((*str)[j] == 'M')
		a = tet_M(map, w, i, c);
	if ((*str)[j] == 'N')
		a = tet_N(map, w, i, c);
	if ((*str)[j] == 'O')
		a = tet_O(map, w, i, c);
	if ((*str)[j] == 'P')
		a = tet_P(map, w, i, c);
	if ((*str)[j] == 'Q')
		a = tet_Q(map, w, i, c);
	if ((*str)[j] == 'R')
		a = tet_R(map, w, i, c);
	if ((*str)[j] == 'S')
		a = tet_S(map, w, i, c);
	return (a);
}

int			ft_tetcheck(char **map, char **str, char w, int i, int c)
{
	int	a;

	a = 0;
	if ((*str)[j] >= 'A' && (*str)[j] <= 'J')
		a = ft_atoj(map, str, w, i, c);
	if ((*str)[j] >'J' && (*str)[j] <= 'S')	
		a = ft_ktos(map, str, w, i, c);
	return (a);
}