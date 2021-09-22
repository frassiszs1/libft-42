/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:27:01 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/12 23:29:56 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptrs;

	ptrs = s;
	i = 0;
	while (i < n)
	{
		ptrs[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
