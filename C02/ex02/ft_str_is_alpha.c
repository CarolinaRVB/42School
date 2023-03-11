/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2i023/03/11 19:55:04 by crebelo-         #+#    #+#             */
/*   Updated: 2023/03/11 20:35:42 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z'))
		{
			if (('A' <= str[i] && str[i] <= 'Z' || str[i] == ' '))
			{
				i++;
			}
			else
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	int	i;
	char	str[10] = "eh# j#$gvg";

	i = ft_str_is_alpha(str);
	printf("%d", i);
	return 0;
}*/
