/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:26:56 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 15:34:44 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION PROTOTYPE
void	*ft_calloc(size_t count, size_t size)
INPUT:
function ft_calloc takes 2 paramaters
    1 - count: number of elements SIZE_T
    1 - size: size of each element SIZE_T
OUTPUT:
    returns pointer to allocated memory, or NULL if allocation fails
PSEUDOCODE
	declare totalsize SIZE_T
	declare pointer *p UNSIGNED CHAR
	declare index variable SIZE t
//Calculate the total size needed
	total_size = count * size
//Handle edge case: if count or size is 0, return a pointer that can be freed
1	IF count is 0 OR size is 0:
    		return malloc(0)
1	ENDIF
//Allocate memory using malloc
	SET p to malloc(total_size)CAST TO UNSIGNED CHAR*
//Handle edge case: if malloc fails, return NULL
2	IF pointer == NULL:
    		return NULL
2	ENDIF
	//while-loop thru index setting every byte in allocated memory to 0
	initialize i to 0
1	WHILE i less than total_size:
	    set p[i] to 0
	    increment i
1	ENDWHILE
	RETURN p POINTER TO MEMORY BLOCK CAST TO *VOID
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			totalsize;
	unsigned char	*p;
	size_t			i;

	totalsize = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	p = (unsigned char *)malloc(totalsize);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (totalsize > i)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
