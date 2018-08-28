/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:28:25 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 19:01:46 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		len;
	char	*str;
	char	*buf;

	if (!s)
		return (NULL);
	start = 0;
	end = 0;
	len = ft_strlen(s);
	while (ft_iswhitespace(s[start++]))
		;
	str = (char *)s + (ft_strlen(s) - 1);
	while (ft_iswhitespace(*str--))
		end++;
	buf = ft_strsub(s, start - 1, (len - ((start - 1) + (end))));
	return (--start == len ? "" : buf);
}
