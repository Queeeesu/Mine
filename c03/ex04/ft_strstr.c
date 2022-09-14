/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:29:34 by akassou           #+#    #+#             */
/*   Updated: 2022/09/07 20:45:18 by akassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	if (to_find[b] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + b] == to_find[b] && str[i + b] != '\0')
		{
			b++;
		}
		if (to_find[b] == '\0')
		{
			return (str + i);
		}
		i++;
		b = 0;
	}
	return (0);
}
