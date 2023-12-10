/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 06:35:37 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/10 11:56:47 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*final;

	if (size && n && (n > 4294967295 / size))
		return (NULL);
	final = malloc(size * n);
	if (!final)
		return (NULL);
	if (n * size == 0)
		ft_bzero(final, 1);
	else
		ft_bzero(final, size * n);
	return (final);
}
