/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:59:02 by gariadno          #+#    #+#             */
/*   Updated: 2019/12/03 18:14:36 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
