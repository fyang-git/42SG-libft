/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:37:48 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STATIC FUNCTION PROTOTYPE
static int  ft_inset(char c, char const *set)
INPUT
helper function ft_inset() takes 2 parameters
    -c CHAR
    -set POINTER TO CHAR ARRAY
OUTPUT
    -returns 1 if c is in set
    -returns 0 if c is not in set
PSEUDOCODE
    declare index i INT, initialise to zero
1    WHILE
    1     IF c == set[i]
            RETURN (1)
          ELSE 
            RETURN (0)
    1     ENDIF
1    ENDWHILE
*/
/*MAIN FUNCTION PROTOTYPE
char    *ft_strtrim(char const *s1, char const *set)
INPUT
    function takes 2 parameters
    1 - s1 POINTER TO CHAR ARRAY storing a str
    2 - set POINTER TO CHAR ARRAY storing a str of chars to be trimmed fr s1
OUTPUT
    returns a COPY of str 1 with set trimmed from start and end
PSEUDOCODE
    declare counter variable, start SIZE_T
    declare counter variable, end SIZE_T
    declare ts1 POINTER TO CHAR ARRAY storing trimmed str

1    IF (s1 == NULL)
        return (ft_strdup(""));
1   ENDIF
    initialise start to 0
        SET start to 0;
    initialise end to ft_strlen(s1)
    //loop thru index checking if element is in set
1    WHILE (is_inset(s1[start]), set)
        increment start position
1    ENDWHILE
2    WHILE (is_inset(s1[end - 1], set) && end > start)
        decrement end poition
2    ENDWHILE
    SET ts1 to ft_substr(s1, start, (end - start))
    return (ts1)
*/
#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ts1;

	if (s1 == NULL)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1);
	while (ft_inset(s1[start], set))
		start++;
	while (ft_inset(s1[end - 1], set) && end > start)
		end--;
	ts1 = ft_substr(s1, start, (end - start));
	return (ts1);
}
