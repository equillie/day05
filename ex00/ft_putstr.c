/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:26:35 by equillie          #+#    #+#             */
/*   Updated: 2018/07/09 12:44:27 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		ft_putchar(c);
		i++;
	}
}