/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obautist <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:51:45 by obautist          #+#    #+#             */
/*   Updated: 2024/11/09 17:51:59 by obautist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_forward(unsigned char *dst, const unsigned char *src,
		size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
}

static void	copy_backward(unsigned char *dst, const unsigned char *src,
		size_t len)
{
	while (len > 0)
	{
		dst[len - 1] = src[len - 1];
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_byte;
	const unsigned char	*src_byte;

	if (dst == src)
		return (dst);
	dst_byte = (unsigned char *)dst;
	src_byte = (const unsigned char *)src;
	if (dst_byte < src_byte)
		copy_forward(dst_byte, src_byte, len);
	else
		copy_backward(dst_byte, src_byte, len);
	return (dst);
}
