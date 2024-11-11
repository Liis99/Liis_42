/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obautist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:36:09 by obautist          #+#    #+#             */
/*   Updated: 2024/10/07 13:26:44 by obautist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	int	lis;

	lis = 0;
	while (s[lis] != '\0')
		lis++;
	return (lis);
}
/*
#include <stdio.h>

int	main(void)
{
	int	lis;

	lis[]= "hola";
	printf("%s\n", ft_strlen(lis));
	return (0);
}
*/
