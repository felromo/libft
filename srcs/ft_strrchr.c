/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:43:43 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 23:44:05 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len)
	{
		if (s[len] == (char)c)
			return ((char *)&(s[len]));
		len--;
	}
	if (!c)
		return ((char *)&(s[len]));
	return (NULL);
}
