/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetraloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 22:15:16 by shicks            #+#    #+#             */
/*   Updated: 2016/11/30 22:15:18 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft/libft.h"

int         tet_A(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + c] = a;
                (*map)[i + c + 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_B(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + 3 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + 2] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + 3] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + 2] = a;
                (*map)[i + 3] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_C(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if ((i + (c * 3)) >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + (c * 2)] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 3)] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + (c * 2)] = a;
                (*map)[i + (c * 3)] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_D(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) - 1 >= len - 1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c - 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 2) - 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + c - 1] = a;
                (*map)[i + (c * 2) - 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_E(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c + 2 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c + 2] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + c + 1] = a;
                (*map)[i + c + 2] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_F(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c - 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + c] = a;
                (*map)[i + c - 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_G(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 2) + 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + c + 1] = a;
                (*map)[i + (c * 2) + 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_H(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c + 2 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c + 2] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + c + 1] = a;
                (*map)[i + c + 2] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_I(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + (c * 2)] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 2) - 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + (c * 2)] = a;
                (*map)[i + (c * 2) - 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_J(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + 2] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c + 2] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + 2] = a;
                (*map)[i + c + 2] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_K(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 2)] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + c] = a;
                (*map)[i + (c * 2)] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_L(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c - 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c - 2] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + c - 1] = a;
                (*map)[i + c - 2] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_M(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + (c * 2)] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 2) + 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + (c * 2)] = a;
                (*map)[i + (c * 2) + 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_N(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + 2] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + 2] = a;
                (*map)[i + c] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_O(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + (c * 2) + 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + c + 1] = a;
                (*map)[i + (c * 2) + 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_P(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c - 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + c + 1] = a;
                (*map)[i + c - 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_Q(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + (c * 2)] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + (c * 2)] = a;
                (*map)[i + c + 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_R(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + c + 1 >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + 1] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + 2] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c + 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + 1] = a;
                (*map)[i + 2] = a;
                (*map)[i + c + 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}

int         tet_S(char **map, char a, int i, int c)
{
    int z;
	int len;

    z = 0;
	len = ft_strlen(*map);
	if (i + (c * 2) >= len -1)
		z = -1;
    if (z != -1 && (a == '.' || (*map)[i + c] == '.'))
    {
        if (z != -1 && (a == '.' || (*map)[i + (c * 2)] == '.'))
        {
            if (z != -1 && (a == '.' || (*map)[i + c - 1] == '.'))
            {
                (*map)[i] = a;
                (*map)[i + c] = a;
                (*map)[i + (c * 2)] = a;
                (*map)[i + c - 1] = a;
                z = 1;
            }
        }
    }
    return (z);
}
