/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frde-ass <frde-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 11:00:53 by frde-ass          #+#    #+#             */
/*   Updated: 2021/09/21 11:42:37 by frde-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_reverse(char *p)
{
	char *tmp;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tmp = "";
	while(p[i] != '\0')
	{
		tmp[i] = p[i];
		i++;
		j++;
	}
	while(j--)
	{
		p[i] = tmp[j];
		j--;
	}
	return(p);
}


char	*ft_itoa(int n)
{
	int	i;
	int	neg;
	char	*p;

	i = 1;
	neg = 0;
	if (n < 0)
		neg = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	p = malloc(sizeof(char) * (neg + i + 1));
	if (p == NULL)
		return (0);
	while (i != 0)
	{
		p[i] = (n % 10);
		n = n / 10;
		i--;
	}
//	ft_reverse(p);
	return (ft_reverse(p));
}

