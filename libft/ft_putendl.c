/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvigne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:28:07 by bvigne            #+#    #+#             */
/*   Updated: 2017/11/10 17:28:09 by bvigne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s)
	{
		str = (char *)s;
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar('\n');
	}
}