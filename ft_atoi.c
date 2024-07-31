/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:42:09 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:34:12 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '-')
	{	
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nb);
}
/*
int     main(void)
{
        char    s1[] = "---12";
        char    s2[] = "-+-12";
        char    s3[] = "  123";
        char    s4[] = "-a1";
        char    s5[] = "abc";

        printf("s1: %s\ns2: %s\ns3: %s\ns4: %s\ns5: %s\n", s1, s2, s3, s4, s5);
        printf("s1 integer value is: %d\n", ft_atoi(s1));
        printf("s2 integer value is: %d\n", ft_atoi(s2));
        printf("s3 integer value is: %d\n", ft_atoi(s3));
        printf("s4 integer value is: %d\n", ft_atoi(s4));
        printf("s5 integer value is: %d\n", ft_atoi(s5));
        return (0);
}*/
/*
 * FUNCTION ft_atoi takes 1 pointer *str
 *      declare index variable for str[i]
 *      declare counter variable 'n' for counting neg sign
 *      declare int nb
 *      declare int sign
 *
 *      initialise i to 0;
 *      initialise n to 0;
 *      initialise nb to 0;
 *      initialise sign to 1;
 *
 *      1 WHILE (str[i] == ' ' (32), '\t' (9), '\r' (13), '\f' (12), '\n'(10),
 *                               '\v' (11)) //whitespace per isspace
 *              increment i
 *      1 ENDWHILE
 *        //deskcheck output (i) //continue to 2-if
 *      2 IF str[i] == '-' OR str[i] == '+' //count nof signs
 *              IF str[i] == '-'
 *              increment n
 *              3 IF  n % 2 == 1
 *                      sign = -1
 *              3 ELSE 
 *                      sign = 1
 *              3 ENDIF
 *        increment i
 *      2 ENDIF //desk check output sign
 *      2 WHILE str[i] is numeric
 *              set nb = nb * 10 + (str[i] - '0') to get int value
 *              increment i
 *      2 ENDWHILE
 *      return (sign) * (nb)
 *END FUNCTION */
