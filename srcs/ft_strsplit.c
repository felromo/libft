/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:30:18 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 19:27:42 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static int	arrlen(char *str, char del)
{
	int	len;
	int	w;

	len = 0;
	while (*str)
	{
		if (*str != del)
		{
			len += (w) ? 0 : 1;
			w = 1;
		}
		if (*str == del && w)
			w = 0;
		str++;
	}
	return (len);
}

static char	*inner(char *str, size_t len)
{
	char	*buf;
	char	*tmp;

	buf = ft_strnew(len + 1);
	tmp = buf;
	while (len--)
	{
		*tmp++ = *str++;
	}
	return (buf);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**buf;
	size_t	len;
	size_t	i;
	size_t	k;

	if (!s)
		return (NULL);
	len = arrlen((char *)s, c);
	if (!(buf = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	k = 0;
	while (len--)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		buf[k++] = inner((char*)s, i);
		while (*s != c && *s)
			s++;
	}
	buf[k] = NULL;
	return (buf);
}
