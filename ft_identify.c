/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identify.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 18:38:53 by shicks            #+#    #+#             */
/*   Updated: 2016/11/21 20:38:35 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

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

int			j;

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

void		ft_mapfil(char **map, int c)
{
	int		len;
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (!map)
		return ;
	len = ((c * (c - 1)));
	while (a < len)
	{
		b++;
		if (b == c)
		{
			(*map)[a] = '\n';
			b = 0;
		}
		else
		{
			(*map)[a] = '.';
		}
		a++;
	}
	(*map)[a] = '\n';
	(*map)[a + 1] = '\0';
}

char		*ft_remake(char **map, int c)
{
	char	*new;

	ft_strdel(map);
	new = ft_strnew((c * (c - 1 + 1)));
	ft_mapfil(&new, c);
	return (new);
}

void		ft_placetet(char **map, char **str, int i, int c, int no_sol)
{
	char	w;
	int		a;
	int		len;

	a = 0;
	w = 'A' + j;
	len = ft_strlen(*map);
	if ((*map)[i] == '.')
		a = ft_tetcheck(map, str, w, i, c);
	if (a == 1)
	{
		j++;
		no_sol = 0;
		i = 0;
	}
	i++;
	if (no_sol == 0 && a == -1)
	{
		i = 0;
		no_sol = 1;
		ft_placetet(map, str, i, c, no_sol);
	}
	else if (no_sol == 1 && a == -1 && j > 0)
	{
		j--;
		w = 'A' + j;
		i = 0;
		while ((*map)[i] != w)
			i++;
		a = ft_tetcheck(map, str, '.', i, c);
		i++;
		ft_placetet(map, str, i, c, no_sol);
	}
	else if (no_sol == 1 && a == -1 && j == 0)
	{
		c++;
	    *map = ft_remake(map, c);
		i = 0;
		j = 0;
		ft_placetet(map, str, i, c, no_sol);
	}
	if ((*str)[j] != '\0')
		ft_placetet(map, str, i, c, no_sol);
	return ;
}

int			sqrt_strnum(char *str)
{
	int	tetNum;
	int guess;

	tetNum = ft_strlen(str) * 4;
	guess = 1;
	while ((guess * guess <= tetNum))
		guess++;
	return (guess);
}

int			main(void)
{
	int		i;
	char	*str;
	char	*map;
	int		c;
	int		no_sol;

	i = 0;
	j = 0;
	no_sol = 0;
	str = "EOHB\0";
	c = sqrt_strnum(str);
	map = ft_strnew((c * (c - 1) + 1));
	ft_mapfil(&map, c);
	ft_placetet(&map, &str, i, c, no_sol);
	ft_putstr(map);
	return (0);
}
