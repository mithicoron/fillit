/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 16:21:04 by shicks            #+#    #+#             */
/*   Updated: 2016/11/27 16:21:07 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

//char		*piece_compare(char *buff)
//{
//
//}

char		*ft_piecetrim(char *s)
{
	char	*new;
	int		start;
	int		end;
	int		i;

	i = 0;
	end = 0;
	start = 0;
	if (!s)
		return (NULL);
	while (s[start] != '#')
		start++;
	while (s[end] != '\0')
	{
		if (s[end] == '\n')
			s[end] = '.';
		end++;
	}
	while (s[end] != '#' && end > start)
		end--;
	if (!(new = ft_strnew(end - start)))
		return (NULL);
	while (start <= end)
	{
		if (s[start] == '\n')
			++start;
		if (s[start] != '\n')
			new[i] = s[start];
			i++;
			start++;
	}
	new[i] = '\0';
	return (new);
}

void		ft_checkpiece(int argc, char **argv)
{
	int		fd_input;
	int 	read_length;
	char	*buff;

	fd_input = open(argv[1], O_RDONLY);
	buff = (char*)malloc(sizeof(char) * 21);
	read_length = 21;
	while (read_length == 21)
	{
		read_length = read(fd_input, buff, 21);
		buff[read_length] = '\0';
		printf("%s\n", buff);
		ft_piecetrim(buff);
		printf("%s\n\n", buff);
	}
}

int			main(int argc, char **argv)
{
	ft_checkpiece(argc, argv);
	return (0);
}