/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 12:58:24 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/08 08:27:10 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char * str);

int		main()
{
	int		result;

	result = ft_strlen("xptdr");
	printf("%d", result);
	return(0);
}
