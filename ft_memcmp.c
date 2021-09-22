/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:28:01 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/13 17:42:43 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			count;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)b1;
	b = (unsigned char *)b2;
	count = 0;
	if (len == 0)
		return (0);
	if (len > 0)
	{
		while (count < (len - 1))
		{
			if ((a[count]) == (b[count]))
				count++;
			else if ((a[count]) != (b[count]))
				return ((a[count]) - (b[count]));
		}
	}
	return ((a[count]) - (b[count]));
}
