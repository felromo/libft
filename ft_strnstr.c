/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:47:48 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 18:51:18 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*cmp;
	char	*tmp;
	int		ltmp;
	int		i;

	i = 0;
	if (!*haystack)
		return (NULL);
	if (!*needle || haystack == needle)
		return (char *)haystack;
	while ((len - i) >= ft_strlen(needle) && *haystack)
	{
		cmp = (char *)haystack;
		tmp = (char *)needle;
		ltmp = len;
		while (*tmp && ltmp-- && *cmp++ == *tmp && tmp++)
			;
		if (ltmp > 0 && !*tmp)
			return (char *)haystack;
		haystack++;
		i++;
	}
	return (NULL);
}

/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len) */
/* { */
/*   return strnstr(haystack, needle, len); */
/* } */
