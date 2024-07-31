/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:36:38 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FUNCTION ft_strdup
	char	*ft_strdup(const char *s1)
INPUT
	ft_strdup takes one parameter
	1 - s1 POINTER TO MEMORY REGION with char array of str to be duped
OUTPUT
	returns p CHAR POINTER TO MEMORY REGION allocated to the duped str 
PSEUDOCODE
	declare index variable for s1 'len' SIZE_T
	declare pointer *p POINTER TO CHAR ARRAY for dupe str
	declare index variable for dup str i SIZE_T

	initialise len to zero
//handle edge case for null s1
1	IF s1 is null
		return (NULL)
1	ENDIF
//while-loop iterate thru array to calcul8 len of s1 + '\0'
1	WHILE s1[len] is not '\0'
		increment len
	increment len
1	ENDWHILE
//allocate memory for dup str to size of s1
	SET pointer to (malloc(len) CAST TO POINTER TO CHAR ARRAY
//handle edge case if malloc fails
2	IF pointer is null
		return null
2	ENDIF
//while loop to copy s1 to newly allocated mem for dup str
	initalise i to zero
2	WHILE (len > i)
		SET p[i] to s[i]
		increment i
2	ENDWHILE
	RETURN pointer
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*p;
	size_t	i;

	len = 0;
	while (s1[len] != '\0')
		len++;
	len++;
	p = malloc((len) * (sizeof(char)));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (len > i)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
