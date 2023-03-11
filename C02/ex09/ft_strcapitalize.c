/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:22:18 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 20:02:16 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (' ' <= str[i - 1] && str[i - 1] <= '/')
			{
				str[i] = str[i] - 32;
			}
			i++;
		}
	}
	return str;
}

int     main()
{
	char    str[12] = "a ccr h+s dF";

	ft_strcapitalize(str);
        printf("%s\n", str);
	return 0;
}
