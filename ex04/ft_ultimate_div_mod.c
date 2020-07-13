/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nqmagudu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:21:03 by nqmagudu          #+#    #+#             */
/*   Updated: 2020/07/10 15:31:46 by nqmagudu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	
	if (*b != 0)
	{
		int temporal2;
		int temporal2;
		
		temporal1 = *a / *b;
		temporal2 = *a % *b;
		*a = temporal1;
		*b = temporal2;
	}
}
