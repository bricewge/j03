/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>              +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 12:58:24 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/07 14:46:38 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int	*nbr);

int		main()
{
	int i;
	int *ptr;

	i = 24;
    ptr = &i;

	ft_ft(ptr);
	printf("%d", i);
}
