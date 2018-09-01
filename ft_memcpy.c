/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:37:58 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 22:38:00 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;

	tmp = dst;
	while (n--)
		*tmp++ = *(char *)src++;
	return (dst);
}

/* void	*ft_memcpy(void *dst, const void *src, size_t n) */
/* { */
/*   return memcpy(dst, src, n); */
/* } */