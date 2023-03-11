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

#include<stdio.h>

int     ft_str_is_printable(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                if ((' ' <= str[i] && str[i] <= '~') || str[i] == ' ')
                {
                        str[i] = '1';
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
