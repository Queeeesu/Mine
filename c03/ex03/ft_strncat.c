/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:18:37 by akassou           #+#    #+#             */
/*   Updated: 2022/09/07 20:28:49 by akassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[b] != '\0' && b < nb)
	{
		dest[i + b] = src[b];
		b++;
	}
	dest[i + b] = '\0';
	return (dest);
}
