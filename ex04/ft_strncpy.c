/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equillie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:11:52 by equillie          #+#    #+#             */
/*   Updated: 2018/07/12 17:30:05 by equillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[n] != '\0')
	{
		dest[n] = '\0';
		n++;
	}
	return (dest);
}
