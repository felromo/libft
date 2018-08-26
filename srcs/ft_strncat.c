/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:57:30 by fromo             #+#    #+#             */
/*   Updated: 2018/08/25 22:59:16 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i++])
		;
	while (n-- && (s1[-1 + i++] = *s2++))
		;
	return (s1);
}
