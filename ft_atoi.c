/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 09:34:34 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/16 13:56:52 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	space(char c)
{
	if (c == 32 || c == 9 || c == 10 || c == 11 || c == 12 || c == 13 )
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	n;
	size_t	neg;

	i = 0;
	n = 0;
	neg = 0;
	while (nptr[i] != '\0' && space(nptr[i]))
		i++;
	if (nptr[i] != '\0' && nptr[i] == '-')
	{
		neg = 1;
		i++;
	}
	else if (nptr[i] != '\0' && nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
		n = (n * 10) + (nptr[i++] - '0');
	if (neg == 1)
		return (-n);
	return (n);
}
