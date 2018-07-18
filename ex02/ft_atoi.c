/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:31:57 by equillie          #+#    #+#             */
/*   Updated: 2018/07/10 15:42:12 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		len;

	i = 0;
	nb = 0;
	len = ft_strlen(str) - 1;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (len >= 0 && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
		len--;
	}
	if (str[0] == '-')
		nb = -nb;
	return (nb);
}
