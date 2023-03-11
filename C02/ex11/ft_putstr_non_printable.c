/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crebelo- <crebelo-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:36:02 by crebelo-          #+#    #+#             */
/*   Updated: 2023/03/11 20:03:07 by crebelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strlowcase(char *str)
{
	int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if ('A' <= str[i] && str[i] <= 'Z')
                {
                        str[i] = str[i] + 32;
                }
		i++;
	}
        return str;
}

void	ft_putstr_non_printable(char *str);

{
	int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if (' ' > str[i] && str[i] > '~')
                {
                        str[i] = str[i] ;
                }
		else
                {
                        str[i] = '0';
                }
                i++;
        }
        return *str;
}

int     main()
{
        char    str[12] = "eH# j#$923Vg";

        ft_str_is_printable(str);
        printf("%s", str);
}
