/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:37:32 by equillie          #+#    #+#             */
/*   Updated: 2018/07/12 23:06:09 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	int		printable;

	i = 0;
	printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			printable = 0;
		}
		i++;
	}
	return (printable);
}
