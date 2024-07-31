/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:38:08 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION PROTOTYPE
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
INPUT
function takes 3 parameters
	1 - dst POINTER TO MEMORY BLOCK storing char array of dest str
	2 - src POINTER TO MEMORY BLOCK storing char array of src str
	3 - dstsize SIZE OF DEST BUFFER
OUTPUT
	returns total length of dst + src strings SIZE_T
PSEUDOCODE
	declare index variable 'i' SIZE_T
	declare index variable 'srclen' SIZE_T
	declare index variable dstlen SIZE_T

	initialise i, strlen, dstlen to zero
//while-loop to calcul8 len of dest str by indexing the char array
1	WHILE (dst[i] is not null AND dstsize > i)
		increment i
		increment dst
1	ENDWHILE
//while-loop to calcul8 len of src str by indexing the char array
2	WHILE (src[strlen] is not '\0')
		increment srclen
2	ENDWHILE 
//check to stop function before dest buffer overflow
1	IF (dstlen >= dstsize)
		return (dstsize + srclen)
1	ENDIF

	initialise i to zero
//while-loop to copy src str to dst str up to (dstsize - 1) char
2	WHILE (src[i] is not '\0' AND dstlen + i < dstsize - 1)
		dst[dstlen + i] = src[i]
		increment i
2	ENDWHILE
//append null terminator to end of dest str if dest buffer has room
2	IF (dstlen + i < dstsize)
		dst[dstlen + i] = '\0'
2	ENDIF
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	srclen = 0;
	dstlen = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
		dstlen++;
	}
	while (src[srclen] != '\0')
		srclen++;
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	i = 0;
	while (src[i] != '\0' && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen + i < dstsize)
		dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
