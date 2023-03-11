/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 19:57:49 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 19:58:10 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int     i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') || str[i] == ' ')
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

        i = ft_str_is_lowercase(str);
        printf("%d", i);
}*/
