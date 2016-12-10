/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 02:06:15 by shicks            #+#    #+#             */
/*   Updated: 2016/10/27 23:20:41 by shicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*mem;

	mem = (char *)malloc(size);
	if (mem == 0)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
