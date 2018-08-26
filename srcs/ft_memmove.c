/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:47:53 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 22:47:55 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmpdst;
	char		*tmpsrc;
	size_t		i;

	tmpdst = (char *)src;
	tmpsrc = (char *)dst;
	i = 0;
	if (dst >= src)
		while (len--)
			tmpdst[len] = tmpsrc[len];
	else
		while (i++ < len)
			tmpdst[i - 1] = tmpsrc[i - 1];
	return (dst);
}
