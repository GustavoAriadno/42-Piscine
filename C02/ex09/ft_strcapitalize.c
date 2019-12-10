/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gariadno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:02:27 by gariadno          #+#    #+#             */
/*   Updated: 2019/12/04 12:59:24 by gariadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (str);
}

int		ft_is_an(char a)
{
	if ((a >= '0' && a <= '9') ||
		(a >= 'A' && a <= 'Z') ||
		(a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' && i == 0)
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && ft_is_an(str[i - 1]) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}
