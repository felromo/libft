/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:25:39 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 20:50:32 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1)
		return (0);
	if (ft_strequ("", s2))
		return (1);
	while (n-- && *s1 && *s2)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (*--s1 == *--s2);
}
