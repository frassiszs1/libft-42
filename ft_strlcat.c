/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:47:00 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 15:36:56 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (slen + size);
	if (size > 0 && size != '\0')
	{
		while (i < (size - dlen - 1) && src[i] != '\0')
		{
			dst[dlen + i] = src[i];
			i++;
		}
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
