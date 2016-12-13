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

#include "./libft/libft.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

void		piece_compare(char **bufftrim, char **stor, int istor)
{
	if (ft_strequ((*bufftrim), "##...##") == 1)
		(*stor)[istor] = 'A';
	else if (ft_strequ((*bufftrim), "####") == 1)
		(*stor)[istor] = 'B';
	else if (ft_strequ((*bufftrim), "#....#....#....#") == 1)
		(*stor)[istor] = 'C';
	else if (ft_strequ((*bufftrim), "#...##...#") == 1)
		(*stor)[istor] = 'D';
	else if (ft_strequ((*bufftrim), "##....##") == 1)
		(*stor)[istor] = 'E';
	else if (ft_strequ((*bufftrim), "##..##") == 1)
		(*stor)[istor] = 'F';
	else if (ft_strequ((*bufftrim), "#....##....#") == 1)
		(*stor)[istor] = 'G';
	else if (ft_strequ((*bufftrim), "#....###") == 1)
		(*stor)[istor] = 'H';
	else if (ft_strequ((*bufftrim), "#....#...##") == 1)
		(*stor)[istor] = 'I';
	else if (ft_strequ((*bufftrim), "###....#") == 1)
		(*stor)[istor] = 'J';
	else if (ft_strequ((*bufftrim), "##...#....#") == 1)
		(*stor)[istor] = 'K';
	else if (ft_strequ((*bufftrim), "#..###") == 1)
		(*stor)[istor] = 'L';
	else if (ft_strequ((*bufftrim), "#....#....##") == 1)
		(*stor)[istor] = 'M';
	else if (ft_strequ((*bufftrim), "###..#") == 1)
		(*stor)[istor] = 'N';
	else if (ft_strequ((*bufftrim), "##....#....#") == 1)
		(*stor)[istor] = 'O';
	else if (ft_strequ((*bufftrim), "#...###") == 1)
		(*stor)[istor] = 'P';
	else if (ft_strequ((*bufftrim), "#....##...#") == 1)
		(*stor)[istor] = 'Q';
	else if (ft_strequ((*bufftrim), "###...#") == 1)
		(*stor)[istor] = 'R';
	else if (ft_strequ((*bufftrim), "#...##....#") == 1)
		(*stor)[istor] = 'S';
}

char		*ft_piecetrim(char **bufftrim, char **buff, char **stor)
{
	int		i;
	int		start;
	int		hash;

	i = 0;
	hash = 0;
	start = 0;
	while ((*buff)[start] != '\0')
	{
		if ((*buff)[start] == '\n')
			(*buff)[start] = '.';
		start++;
	}
	start = 0;
	while (hash < 4 && (*buff)[start] != '\0')
	{
		if ((*buff)[start] == '#')
			hash++;
		if (hash >= 1)
		{
			(*bufftrim)[i] = (*buff)[start];
			i++;
		}
		start++;
	}
	(*bufftrim)[i] = '\0';
	return (*bufftrim);
}

char		*ft_readpieces(int argc, char **argv)
{
	int		fd_input;
	int 	read_length;
	int		istor;
	char	*buff;
	char	*bufftrim;
	char	*stor;

	istor = 0;
	fd_input = open(argv[1], O_RDONLY);
	buff = ft_strnew(21);
	bufftrim = ft_strnew(21);
	stor = ft_strnew(10000);
	read_length = 21;
	while (read_length == 21)
	{
		read_length = read(fd_input, buff, 21);
		buff[read_length] = '\0';
		bufftrim = ft_piecetrim(&bufftrim, &buff, &stor);
		piece_compare(&bufftrim, &stor, istor);
		istor++;
	}
	return (stor);
}

//int			main(int argc, char **argv)
//{
//	char	*pieces;
//
//	istor = 0;
//	pieces = ft_readpieces(argc, argv);
//	ft_putstr(pieces);
//	return (0);
//}