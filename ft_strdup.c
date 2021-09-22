/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:23:02 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 11:44:54 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	a;
	char	*b;
	size_t	i;

	i = 0;
	a = ft_strlen(str);
	b = malloc (((sizeof(char)) * a) + 1);
	if (b == NULL)
		return (0);
	while (i <= a)
	{
		b[i] = str[i];
		i++;
	}
	return (b);
}
