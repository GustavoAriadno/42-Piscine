/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:03:26 by gariadno          #+#    #+#             */
/*   Updated: 2019/12/03 21:55:52 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_translate(unsigned char x)
{
	unsigned char	ten;
	unsigned char	uni;
	char			*hex;

	hex = "0123456789abcdef";
	ten = x / 16;
	uni = x % 16;
	ft_putchar('\\');
	ft_putchar(hex[ten]);
	ft_putchar(hex[uni]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_translate(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
