/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 02:52:44 by gariadno          #+#    #+#             */
/*   Updated: 2019/11/27 02:52:46 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char b, char c)
{
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ese(int a)
{
	if (a != 55)
	{
		ft_putchar(',', ' ');
	}
}

void	ft_print_comb(void)
{
	int i[3];

	i[0] = 48;
	while (i[0] < 56)
	{
		i[1] = i[0] + 1;
		while (i[1] < 57)
		{
			i[2] = i[1] + 1;
			while (i[2] < 58)
			{
				write(1, &i[0], 1);
				write(1, &i[1], 1);
				write(1, &i[2], 1);
				ese(i[0]);
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}
