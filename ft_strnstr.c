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
#include <stdio.h>

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
/*   char *tmp; */
/*   char *head = (char *)haystack; */
/*   char *find; */

/*   if (!ft_strcmp(needle, "")) */
/*     return ((char *)haystack); */

/*   while (*head && ((int)len - (int)ft_strlen(needle)) > 0) */
/*     { */
/*       /\* tmp = ((int)len - (int)(head - haystack) >= 0) ? ft_strsub(head, 0, len) : head; *\/ */
/*       tmp = len ? ft_strsub(head, 0, len) : head; */
/*       if ((find = ft_strstr(tmp, needle))) */
/*         { */
/*           printf("========\n"); */
/*           printf("%s\n", find); */
/*           printf("========\n"); */
/*           return (find); */
/*         } */
/*       head++; */
/*       len--; */
/*       /\* ft_memdel((void **)&tmp); *\/ */
/*     } */
/*   return (NULL); */
/* } */

/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len) */
/* { */
/* 	char	*cmp; */
/* 	char	*tmp; */


/* 	if (!*needle) */
/* 		return (char *)haystack; */
/* 	if (needle == haystack) */
/* 		return ((char *)haystack); */
/*   char *test = ft_strsub(haystack, 0, len); */
/* 	while (*test) */
/*     { */
/*       cmp = (char *)test; */
/*       tmp = (char *)needle; */
/*       while (*tmp && *cmp == *tmp) */
/*         { */
/*           cmp++; */
/*           tmp++; */
/*         } */
/*       if (!*tmp) */
/*         return (char *)test; */
/*       test++; */
/*     } */
/* 	return (NULL); */
/* } */

/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len) */
/* { */
/*   	char	*cmp; */
/*   	char	*tmp; */
/*   	int		ltmp; */
/*   	int		i; */

/*   	i = 0; */
/*   	if (!*haystack) */
/*   		return (NULL); */
/*   	if (!*needle || haystack == needle) */
/*   		return (char *)haystack; */
/*     while ((len - i) >= ft_strlen(needle) && *haystack) */
/*       { */
          
/*       } */
/* } */

/* char	*ft_strnstr(const char *haystack, const char *needle, size_t len) */
/* { */
/*   return strnstr(haystack, needle, len); */
/* } */
