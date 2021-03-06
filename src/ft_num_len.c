/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 00:42:57 by fromo             #+#    #+#             */
/*   Updated: 2018/08/28 17:14:15 by fromo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_num_len(int n)
{
	if (n < 0)
		return (-1 * n / 10 ? (ft_num_len(-1 * n / 10) + 1) : 1) + 1;
	return (n / 10 ? (ft_num_len(n / 10) + 1) : 1);
}
