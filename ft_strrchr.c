/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:25:03 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/11/09 09:37:12 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	while (len >= 0)
	{
		if (*str != c)
		{
			str--;
			len--;
		}
		else
		{
			return ((char *) str);
		}
	}
	return (0);
}