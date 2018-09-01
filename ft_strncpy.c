/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:55:10 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 22:55:35 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len--)
	{
		if (*src)
		{
			dst[i] = *src++;
		}
		else
		{
			dst[i] = '\0';
		}
		i++;
	}
	return (dst);
}

/* char	*ft_strncpy(char *dst, const char *src, size_t len) */
/* { */
/*   return strncpy(dst, src, len); */
/* } */
