/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akassou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:56:52 by akassou           #+#    #+#             */
/*   Updated: 2022/09/10 22:01:58 by akassou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	a = 1;
	b = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			a = a * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		t = t * 10 + str[i] - '0';
		i++;
	}
	return (t * a);
}