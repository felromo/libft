/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:52:47 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 22:53:05 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <string.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*buf;
	int		i;

	if ((buf = ft_strnew(n)))
	{
		i = 0;
		while (n-- && s1[i])
		{
			buf[i] = s1[i];
			i++;
		}
		buf[i] = '\0';
	}
	return (buf);
}
