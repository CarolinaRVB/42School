/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:58:59 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 19:59:40 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int     i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((' ' <= str[i] && str[i] <= '~') || str[i] == ' ')
		{
			i++;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int     main()
{	
	int	i;
	char    str[12] = "eH# j#$923Vg";

        i = ft_str_is_printable(str);
        printf("%d", i);
}*/
