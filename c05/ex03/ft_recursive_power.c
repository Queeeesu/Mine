/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:12:45 by akassou           #+#    #+#             */
/*   Updated: 2022/09/13 18:14:26 by akassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	rs;

	rs = nb;
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power -1)));
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (rs);
}
