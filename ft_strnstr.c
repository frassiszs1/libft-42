/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:29:30 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 15:43:00 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (l[i] == '\0')
		return ((char *)big);
	while (b[i] != '\0' && i < len)
	{
		if (b[i] == l[0])
		{
			j = 1;
			while ((b[i + j] == l[j]) && (i + j) < len && l[j] != '\0')
				j++;
			if (l[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
