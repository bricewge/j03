/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 21:02:29 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/08 00:22:47 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int num1;
	int num2;
	int *a;
	int *b;

	num1 = 16;
	num2 =3;
	a = &num1;
	b = &num2;

	printf("%d", *a);
	printf("%d", *b);
	printf("%s", "\n");

	ft_ultimate_div_mod(a, b);

	printf("%d", *a);
	printf("%d", *b);
}
