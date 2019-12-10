/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 13:16:15 by gariadno          #+#    #+#             */
/*   Updated: 2019/12/09 13:17:31 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int len_src;
	unsigned int i;

	i = 0;
	len_src = ft_strlen(src);
	while (*dest && size)
	{
		dest++;
		size--;
		i++;
	}
	while (*src && size > 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	if (size > 0)
	{
		*(dest++) = '\0';
	}
	return (i + len_src);
}
