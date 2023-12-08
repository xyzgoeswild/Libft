/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:35:37 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/08 06:45:10 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*final;
	size_t	sizetotal;

	sizetotal = n * size;
	if (size && n > SIZE_MAX / size)
		return (NULL);
	final = malloc(sizetotal);
	if (!final)
		return (NULL);
	ft_bzero(final, sizetotal);
	return (final);
}
