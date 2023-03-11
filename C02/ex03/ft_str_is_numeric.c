/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:56:17 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 20:40:43 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_numeric(char *str)
{
	int     i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (('0' <= str[i] && str[i] <= '9') || str[i] == ' ')
		{
			i++;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1),
}
/*int     main()
{
        int	i;
	char    str[12] = "eh# j#$923vg";

        i = ft_str_is_numeric(str);
        printf("%d", i);
}*/
