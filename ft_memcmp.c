/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:37:48 by fyang             #+#    #+#             */
/*   Updated: 2024/06/24 19:11:37 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION PROTOTYPE
	int ft_memcmp(const void *s1, const void *s2, size_t n);
INPUT
	function takes 3 arguments: 2 memory blocks to be compared 
	1 - s1 POINTER TO MEMORY BLOCK
	2 - s2 POINT TO MEMORY BLOCK
	3 - n, the number of bytes to compare
OUTPUT
	function returns an integer that is the difference of the unsigned char
	 of the two memory blocks at the point of difference
	- 0 if the two memory blocks are identical up to n bytes
PSEUDOCODE 
	declare index 'i' SIZE_T  
	declare pointer *p1 CONST UNSIGNED CHAR
 	declare pointer *p2 CONST UNSIGNED CHAR

	initialize i to 0
	cast s1 to pointer to const unsigned char p1
	cast s2 to pointer to const unsigned char p2

1	WHILE i is less than n:
  1        IF p[i] is not equal to p2[i]:
		return p1[i] - p2[i] (cast to int)
  1        ENDIF
	increment i
1	ENDWHILE
	return 0
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n > i)
	{
		if (p1[i] != p2[i])
			return ((int)p1[i] - p2[i]);
		i++;
	}
	return (0);
}
