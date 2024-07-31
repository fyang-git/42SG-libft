/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:49:59 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION PROTOTYPE
void    *ft_memmove(void *dest, const void *src, size_t n)
INPUT
function takes 3 arguments as input
	1 - dest POINTER TO MEMORY BLOCK WHERE CHAR ARE TO BE COPIED
	2 - src POINTER TO MEMORY BLOCK CONTAINING SRC STR
	3 - n  LENGTH NUMBER OF BYTES TO BE COPIED
OUTPUT
	function returns the original value of dest
PESUDOCODE
	cast dest VOID POINTER to d UNSIGNED CHAR
	cast src CONST VOID POINTER to s CONST UNSIGNED CHAR
1 	IF n is zero //handle case where zero bytes are to be copied
		RETURN	dest
1 	ENDIF
	declare index variable SIZE_T
2	IF ((d > s) && (d < s + n))
		SET index to n
	1 	WHILE index is not 0
			dest[index] = src[index]
		decrement index
	1	ENDWHILE
2	ELSE
		SET index to zero
	2	WHILE index is less than n
			dest[index] = src[index]
			increment index
	2	ENDWHILE

2	ENDIF

	RETURN dest
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (n == 0 || d == s)
		return (dest);
	if ((d > s) && (d < s + n))
	{
		i = n;
		while (i != 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
