/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabou-rk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:40:04 by rabou-rk          #+#    #+#             */
/*   Updated: 2022/09/08 19:01:01 by rabou-rk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int ato;

	i = 0;
	sign = 1;
	ato = 0;
	while(str[i] >= 0 && str[i] <= 32 )
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		ato = ato * 10 + str[i] - '0';
		i++;
	}
	ato *= sign;
	return (ato);

}
int main()
{
	char c[] = " ---+--+1234ab567";
	printf("%d", ft_atoi(c));
}
