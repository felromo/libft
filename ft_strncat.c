/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:57:30 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 20:42:29 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i++])
		;
	while ((s1[-1 + i++] = *s2++) && n--)
		;
	s1[i - 2] = '\0';
	return (s1);
}

/* char	*ft_strncat(char *s1, const char *s2, size_t n) */
/* { */
/*   return strncat(s1, s2, n); */
/* } */
