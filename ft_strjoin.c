/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:36:53 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*FUNCTION PROTOTYPE
char    *ft_strjoin(char const *s1, char const *s2);
INPUT
    function ft_strjoin takes in two parameters
    1 - s1 POINTER TO MEMORY BLOCK W CHAR ARRAY
    2 - s2 POINTER TO MEMORY BLOCK W CHAR ARRAY
OUTPUT
    returns a new str consisting of s1 + s2 CHAR ARRAY
PSEUDOCODE
1    declare size variable len of new str (s1+s2) SIZE_T
2   declare s3 POINTER TO MEMORY to char array for new str (s1 + s2)
3    declare index variable i INTEGER

    //call ft_strlen to find len of new str s(1+2) for next step malloc
        initialise len to SUM of ft_strlen(s1) + ft_strlen(s2)
    //call ft_calloc to allocate memory for new str s(1+2)
        SET s3 to ft_calloc() for len+1 chars of size(char) 
1            IF s3 is NULL
                RETURN NULL
1            ENDIF
    //iterate thru index of char array of s3 and s1, copying s1 to s3 frm s[0]
    initialise len to zero
1    WHILE s1 is not nul-terminated
        SET s3[len] to s1[len] 
        increment len
1    ENDWHILE
    initialise index i to 0
    //iterate thru index of char array of s3, s2, copying s2 to s3 at s[len]
2   WHILE s2 is not nul-terminated
        SET s3[len + i] to s2[i]
        increment i
2   ENDWHILE
    return (s3)
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	int		i;
	char	*s3;

	len = ft_strlen(s1) + ft_strlen(s2);
	s3 = ft_calloc(len + 1, sizeof(char));
	if (s3 == NULL)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		s3[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[len + i] = s2[i];
		i++;
	}
	return (s3);
}
