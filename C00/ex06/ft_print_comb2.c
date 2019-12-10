/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 02:54:13 by gariadno          #+#    #+#             */
/*   Updated: 2019/11/27 02:54:16 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	outp(int num)
{
	char ten;
	char uni;

	if (num > 9)
	{
		ten = num / 10;
		uni = num % 10;
		ft_putchar(ten + 48);
		ft_putchar(uni + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(num + 48);
	}
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			outp(n1);
			ft_putchar(' ');
			outp(n2);
			if (n1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}
