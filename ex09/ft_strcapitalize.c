/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabou-rk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 01:23:50 by rabou-rk          #+#    #+#             */
/*   Updated: 2022/09/04 23:40:48 by rabou-rk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabou-rk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 01:23:50 by rabou-rk          #+#    #+#             */
/*   Updated: 2022/09/04 01:23:50 by rabou-rk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
char	*ft_strcapitalize(char *str)
{
    int i;
    int j;

    i = 0;
    
    while (is_upper(str[i]) && str[i] != '\0')
	{
		str[i] +=32;
		i++;
	}
    while (str[i] != '\0')
	{    
		j = i - 1;
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] -= 32;
		}
		if((str[i] >= 'a' && str[i] <= 'z') && !(is_alphanumeric(str[j]))) 
		{
			str[i] -= 32;
		}
		if((str[i] >= 'A' && str[i] <= 'Z') && (is_alphanumeric(str[j])))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
