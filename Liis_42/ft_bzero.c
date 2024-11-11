/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obautist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:18:00 by obautist          #+#    #+#             */
/*   Updated: 2024/10/21 20:33:48 by obautist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*lis;

	lis = (unsigned char *)s;
	while (n--)
		*lis++ = '\0';
}
/*
#include <stdio.h>

 int main()
{
	char	a[] = "hola";

	printf("Avant bzero: %s\n", a);
	ft_bzero(a, 1);
	printf("Apres bzero: %s\n", a);
	return (0);
}
*/
