/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obautist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:43:00 by obautist          #+#    #+#             */
/*   Updated: 2024/11/09 17:25:22 by obautist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	void	*lis;

	lis = dest;
	while (count--)
	{
		*(char *)dest = (char)c;
		dest++;
	}
	return (lis);
}
