/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:12:56 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:28:03 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function strnstr takes 3 parameters: *haystack, *needle, len
 *   initialise index i to 0
 *   declare index j for when needle[0] == haystack[i]
 *
 *1 IF (needle[0] == '\0')
 *     return (haystack)
 *1 ENDIF
//Loop through haystack with i until reaching its end or exceeding len
 *  1 WHILE (haystack[i] != '\0' AND i < len)
 *   2 IF (needle[\0] == haystack[i])
 *        set j = 0
	// Check if needle matches, ensuring not to exceed len
 *    2 WHILE (needle[j] != '\0' && (i+j) < len && haystack[i+j] == needle[j])
 *          increment j
 *    2 ENDWHILE
 *
 *    //if end of needle is reached, return pointer to starting position
 *    3 IF (needle[j] == '\0')
 *        return (&haystack[i])
 *    3 ENDIF
 *   2 ENDIF
 *    increment i
 *  1 ENDWHILE
 *  return NULL;
 * END function strnstr */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (needle[0] == haystack[i])
		{
			j = 0;
			while (needle[j] != '\0' && haystack[i + j] == needle[j]
				&& (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
