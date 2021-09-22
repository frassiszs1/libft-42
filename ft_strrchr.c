/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:16:47 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/15 18:19:03 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	d;

	i = ft_strlen(s);
	d = (char)c;
	while (s[i] != d)
	{
		if (s[i] != d && i == 0)
			return (0);
		i--;
	}
	return ((char *)(s + i));
}
