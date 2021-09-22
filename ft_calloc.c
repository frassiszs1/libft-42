/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:21:05 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 11:44:12 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc((n * size));
	if (p == NULL)
		return (0);
	while (i < (n * size))
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
