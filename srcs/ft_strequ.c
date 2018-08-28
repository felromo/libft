/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:24:59 by fromo             #+#    #+#             */
/*   Updated: 2018/08/27 18:59:52 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1)
		return (0);
	while (*s1 && *s2)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (*s1 == *s2);
}
