/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jour02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 12:58:24 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/08 15:35:35 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strrev(char * str);

int		main()
{
	char	*test;

	test = "abcde";
	printf("%s", test);
	printf("%s",  ft_strrev(test));
	return(0);
}










