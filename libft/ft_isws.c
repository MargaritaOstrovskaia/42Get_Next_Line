/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isws.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:33:31 by mostrovs          #+#    #+#             */
/*   Updated: 2019/09/25 15:17:27 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isws(char ch)
{
	if ((ch >= 9 && ch <= 13) || ch == 32)
		return (1);
	return (0);
}