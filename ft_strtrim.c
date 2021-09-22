/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:54:38 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/20 21:10:35 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./libft.h"

size_t	ft_set_test(char const *s1, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (*s1 == 0)
		return (ft_strdup((char *)s1));
	if (*set == 0)
		return (ft_strdup(s1));
	while (s1[i] != '\0' && ft_set_test(set, s1[i]) == 1)
		i++;
	while (ft_set_test(set, s1[j]) == 1 && j > i)
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
