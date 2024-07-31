/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 17:25:56 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* FUNCTION PROTOTYPE
void    *ft_memcpy(void *dest, const void *src, size_t n)
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
declare and initialise index variable SIZE_T
1 	WHILE index is less than n
		dest [index] = src [index] //copy byte from src[i] to dest[i]
		increment index
1	ENDWHILE
	RETURN dest
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	ft_memcpy(((void*)0), "segfaulter tu dois", 17);
	memcpy(((void*)0), "segfaulter tu dois", 17);
}*/