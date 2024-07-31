/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:36:46 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*PROTOTYPE
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
INPUT
function takes 2 parameters
   1 - s POINTER TO MEMORY BLOCK containing string on which to iterate
   2 - f POINTER TO FUNCTION to apply to each char, that takes 2 arguments
	- unsigned int :index of char in the str
	- char* :pointer to char allowing the function to modify the char
OUTPUT
	-no return value
PSEUDOCODE
//check for null pointers
1    IF s is NULL OR f is NULL
        return
1    ENDIF

    declare, initialize an index variable i

1    WHILE character at s[index] is not the null terminator:
        Call function f, passing index and address of s[index] as arguments
            //f can modify the character directly since it receives a pointer
        Increment index
1    EndWhile
EndProcedure
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
