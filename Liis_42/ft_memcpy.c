/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obautist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:07:27 by obautist          #+#    #+#             */
/*   Updated: 2024/10/07 13:26:15 by obautist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	source[] = "hola como estas";
	char	destination[50];

	printf("%s\n", source);
	ft_memcpy(destination, source, 4);
	printf("Memcpy: %s\n", destination);
	return (0);
}
*/
