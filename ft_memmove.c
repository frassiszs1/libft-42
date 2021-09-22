/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:08:13 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 14:13:38 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*strdst;
	char	*strsrc;

	strdst = (char *)dst;
	strsrc = (char *)src;
	if (strdst <= strsrc)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
		{
			strdst[len] = strsrc[len];
		}
		return (dst);
	}
}
