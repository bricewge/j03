/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <brice.wge@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 00:55:54 by bwaegene          #+#    #+#             */
/*   Updated: 2016/07/08 16:11:02 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*tmp;
	char	*rev;

	i = 0;
	j = 0;
	tmp = str;

	while (str[i])
		i++;

	rev[i] = '\n';
	while (i > 0)
	{
		rev[j] = str[i-1];
		j++;
		i--;
	}

	str = rev;
	return (str);
}

