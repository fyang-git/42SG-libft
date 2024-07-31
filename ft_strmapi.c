/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:37:20 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION PROTOTYPE
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
INPUT
	function takes 2 parameters 
	1 - s POINTER TO MEMRY REGION holding the str on which to iterate
	2 - f FUNCTION acting as POINTER TO EACH CHAR to apply the fn to 
OUTPUT
	return a str created from successive applications of 'f'
PSEUDOCODE
	declare index variable, i UNSIGNED INT
	declare size variabe, len SIZE_T
	declare receiver str, output of function POINTER TO MEMRY RGN W CHAR ARRAY

	initialise i to zero
	call ft_strlen to set len
//null check for s1, len
1		IF s1 is empty or len is zero
			return copy of empty str with ft_strdup()
		ELSE IF f is empty
			return copy of src str with ft_strdup(s)
1		ENDIF
	call malloc to allocate memory block to output str
//iterate through each index element in output str and apply fn to 
	set outpt to *f
	append nul-terminator to end of output
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*outp;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL || len == 0)
		return (ft_strdup(""));
	else if (f == NULL)
		return (ft_strdup(s));
	outp = (char *)malloc((len + 1) * sizeof(char));
	if (outp == NULL)
		return (NULL);
	while (len > i)
	{
		outp[i] = (*f)(i, s[i]);
		i++;
	}
	outp[len] = '\0';
	return (outp);
}
