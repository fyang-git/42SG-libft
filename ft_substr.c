/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:00:24 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 17:07:25 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
FUNCTION ft_substr takes three parameters
    - s POINTER TO CHAR ARRAY storing original str
    - start UNSIGNED INT start index to create the substr
    - len SIZE_T maximum length of the substr
PSEUDOCODE
    declare index variable srclen SIZE_T for length of original str
    declare index variable i SIZE_T 
    declare str POINTER TO CHAR ARRAY to store substr

    //edge case: if s is empty
    //find length of original str
    //edge case: if start position is after the end of the str, return empty str
    */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	srclen;
	size_t	i;
	char	*str;

	i = 0;
	srclen = ft_strlen(s);
	if (len > srclen - start)
		len = srclen - start;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (len > 0 && s[start] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
