/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:02:49 by gariadno          #+#    #+#             */
/*   Updated: 2019/12/03 21:45:06 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int result;

	i = 0;
	result = 0;
	while (src[i] && i < (size - 1) && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	while (src[result])
	{
		result++;
	}
	return (result);
}
