/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:28:01 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 15:46:12 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;
	size_t			l;

	l = len - 1;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (len == 0)
		return (0);
	while (i < l && (a[i]) == (b[i]) && (a[i] != '\0') && (b[i] != '\0'))
		i++;
	return ((a[i]) - (b[i]));
}
