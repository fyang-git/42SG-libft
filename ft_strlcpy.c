/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:37:08 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
INPUT
function takes in 3 arguments
	1 -  dst POINTER TO CHAR ARRAY THAT IS THE DESTINATION BUFFER
	2 - src POINTER TO CHAR ARRAY HOLDING SOURCE STR
	3 - dst_size SIZE OF DESTINATION BUFFER
OUTPUT
	returns the total length of the source string
PSEUDOCODE
	declare source str index variable, 'src_len' SIZE_T
	declare str index variable, 'i' SIZE_T

	initialise src_len to zero
	initialise index to zero
//while-loop to calculate length of source string
1	WHILE (src[src_len] is not null terminator)
		increment src_len
1	ENDWHILE
//handle case where dest str is zero
1	IF dstsize is zero
		return (src_len)
1	ENDIF
//while-loop to copy char from src to dest
2	WHILE i is smaller than (dstsize - 1) && src[i] is not null
		dst[i] = src[i]
		increment i
2	ENDWHILE
//check for null-termination
2	IF dstsize is not 0
		SET dst[i] = null terminator
2	ENDIF
	return length of source str

*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while ((dstsize - 1) > i && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (srclen);
}
