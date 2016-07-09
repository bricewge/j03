/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 20:53:06 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/07 20:57:27 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_swap(int *a, int	*b);

int	main()
{
int a;
int b;
int *ptra;
int *ptrb;

a = 13;
b = 42;
ptra = &a;
ptrb = &b;

printf("%d", *ptra);
printf("%d", *ptrb);
printf("%s", "\n");

ft_swap(ptra, ptrb);
printf("%d", *ptra);
printf("%d", *ptrb);
}
