/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:05:56 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 15:32:52 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	j;

	i = (size_t)start;
	j = 0;
	p = (malloc((sizeof(char) * len) + 1));
	if (p == NULL)
		return (0);
	while (j < len && (i + j) < ft_strlen(s))
	{
		p[j] = s[i + j];
		j++;
	}
	if (j == len)
		p[j] = '\0';
	return (p);
}
