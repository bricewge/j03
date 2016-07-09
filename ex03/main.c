/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 21:47:56 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/07 21:59:13 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int divide;
	int rest;
	int *div;
	int *mod;

	a = 16;
	b =3;
	div = &a;
	mod = &b;
	divide = a/b;
	rest = a%b;

	ft_div_mod(a, b, div, mod);
	printf("%d", *div);
	printf("%d", *mod);
}
