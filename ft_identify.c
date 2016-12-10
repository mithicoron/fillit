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

#include "libfil.h"

int			j;

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
	if ((*map)[i] == '.' && ((*map)[i] != '\n' || (*map)[i] != '\0'))
	{
		a = ft_tetcheck(map, str, w, i, c);
	}
	if (a == 1)
	{
		j++;
		no_sol = 0;
		i = 0;
	}
	if (i < len)
		i++;
	if (((*map)[i] == '\0' || a == -1) && (*str)[j] != '\0')
	{
		if (no_sol == 0)
		{
			i = 0;
			no_sol = 1;
			ft_placetet(map, str, i, c, no_sol);
		}
		if (no_sol == 1 && a == -1)
		{
			c++;
		    no_sol = 0;
		    *map = ft_remake(map, c);
			i = 0;
			j = 0;
			ft_placetet(map, str, i, c, no_sol);
		}
		if (no_sol == 1 && j >= 0)
		{
			if (j > 0)
				j--;
			w = 'A' + j;
			i = 0;
			while ((*map)[i] != w)
				i++;
			a = ft_tetcheck(map, str, '.', i, c);
		}
	}
	if ((*str)[j] != '\0')
		ft_placetet(map, str, i, c, no_sol);
	return ;
}

int			sqrt_strnum(char *str)
{
	int	tetNum;
	int guess;

	tetNum = ft_strlen(str);
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
	str = "ABCDEFGHIJKLMONPQRS\0";
	c = sqrt_strnum(str) + 1;
	map = ft_strnew((c * (c - 1) + 1));
	ft_mapfil(&map, c);
	ft_placetet(&map, &str, i, c, no_sol);
	ft_putstr(map);
	return (0);
}
